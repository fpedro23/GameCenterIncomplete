//
//  ViewController.m
//  GameCenter
//
//  Created by Pedro Contreras Nava on 14/10/14.
//  Copyright (c) 2014 Pedro Contreras Nava. All rights reserved.
//

#import "ViewController.h"
#import "AppSpecificValues.h"
#import "GCHelper.h"
#import "AppDelegate.h"
@interface ViewController ()
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.currentScore = 0;

}

- (IBAction)addScore:(id)sender {
    self.currentScore++;
    self.puntosLabel.text = [NSString stringWithFormat:@"%lld",self.currentScore];
    [self checkAchievements];

}

- (IBAction)showLeaderboard:(id)sender {

}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
- (IBAction)submitScore:(id)sender {
}


- (void) checkAchievements
{
    NSString* identifier= NULL;
    double percentComplete= 0;
    switch(self.currentScore)
    {
        case 1:
        {
            identifier= kAchievementOneTap;
            percentComplete= 100.0;
            break;
        }
        case 20:
        {
            identifier= kAchievement20Taps;
            percentComplete= 100;
            break;
        }
            
    }
    if(identifier!= NULL)
    {
        [[GCHelper defaultHelper] reportAchievementIdentifier:identifier percentComplete:100];
    }
}

- (IBAction)resetPressed:(id)sender {
}


- (IBAction)resetScore:(id)sender {
    self.currentScore =0;
    self.puntosLabel.text = [NSString stringWithFormat:@"%lld",self.currentScore];
}



@end
