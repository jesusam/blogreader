//
//  DetailViewController.h
//  BlogReader
//
//  Created by Jesus Morales on 5/7/13.
//  Copyright (c) 2013 Jesus Morales. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
