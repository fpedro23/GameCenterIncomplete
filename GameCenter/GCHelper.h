//
//  GCHelper.h
//  GameCenter
//
//  Created by Pedro Contreras Nava on 14/10/14.
//  Copyright (c) 2014 Pedro Contreras Nava. All rights reserved.
//

@import Foundation;
@import GameKit;
@interface GCHelper : NSObject <GKGameCenterControllerDelegate>{
    
    BOOL gameCenterAvailable;
    
    BOOL userAuthenticated;
    
}
@property (assign, readonly) BOOL gameCenterAvailable;
@property (nonatomic, strong) NSArray* leaderboards;
@property (nonatomic, strong) NSMutableDictionary *achievementsDictionary;

+ (GCHelper*)defaultHelper;
- (void)authenticateLocalUserOnViewController:(UIViewController*)viewController
                            setCallbackObject:(id)obj
                            withPauseSelector:(SEL)selector;

- (void)reportScore:(int64_t)score forLeaderboardID:(NSString*)identifier;
- (void)showLeaderboardOnViewController:(UIViewController*)viewController;

- (void)reportAchievementIdentifier: (NSString*) identifier percentComplete: (float) percent;
- (GKAchievement*)getAchievementForIdentifier: (NSString*) identifier;
- (void)resetAchievements;
- (void)completeMultipleAchievements:(NSArray*)achievements;
- (void)registerListener:(id<GKLocalPlayerListener>)listener;
@end
