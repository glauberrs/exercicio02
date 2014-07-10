//
//  DetailViewController.h
//  exercicio02
//
//  Created by Jackson F. de A. Mafra on 10/07/2014.
//  Copyright (c) 2014 Jackson F. de A. Mafra. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
