//
//  FISTriviaTableViewController.h
//  locationTrivia-tableviews
//
//  Created by Sergey Nevzorov on 6/23/16.
//  Copyright © 2016 Joe Burgess. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FISLocationsTableViewController.h"
#import "FISTrivium.h"


@interface FISTriviaTableViewController : UITableViewController

@property (strong, nonatomic) NSArray *triviaForLocation;

@end
