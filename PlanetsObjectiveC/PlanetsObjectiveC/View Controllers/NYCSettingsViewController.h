//
//  NYCSettingsViewController.h
//  PlanetsObjectiveC
//
//  Created by Nathanael Youngren on 4/1/19.
//  Copyright © 2019 Nathanael Youngren. All rights reserved.
//

#import <UIKit/UIKit.h>

@class NYCPlanetController;

NS_ASSUME_NONNULL_BEGIN

@interface NYCSettingsViewController : UIViewController

- (IBAction)doneButtonTapped:(UIButton *)sender;

- (IBAction)plutoSwitchValueChanged:(UISwitch *)sender;

@property (weak, nonatomic) IBOutlet UISwitch *plutoSwitch;

@property NYCPlanetController *planetController;

@end

NS_ASSUME_NONNULL_END
