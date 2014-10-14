//
//  ViewController.h
//  GameCenter
//
//  Created by Pedro Contreras Nava on 14/10/14.
//  Copyright (c) 2014 Pedro Contreras Nava. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GameKit/GameKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *puntosLabel;
@property (nonatomic, assign) int64_t currentScore;



@end

