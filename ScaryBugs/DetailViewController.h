//
//  DetailViewController.h
//  ScaryBugs
//
//  Created by Shafqat Dulal on 7/24/15.
//
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

