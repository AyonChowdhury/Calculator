//
//  ViewController.h
//  Calculator
//
//  Created by Chowdhury Md Rajib Sarwar on 7/11/14.
//  Copyright (c) 2014 Chowdhury Md Rajib Sarwar. All rights reserved.
//

#import <UIKit/UIKit.h>

int method;
int selectNumber;
float runningTotal;

@interface ViewController : UIViewController
{
    IBOutlet UILabel *Screen;
}

-(IBAction)Number1:(id)sender;
-(IBAction)Number2:(id)sender;
-(IBAction)Number3:(id)sender;
-(IBAction)Number4:(id)sender;
-(IBAction)Number5:(id)sender;
-(IBAction)Number6:(id)sender;
-(IBAction)Number7:(id)sender;
-(IBAction)Number8:(id)sender;
-(IBAction)Number9:(id)sender;
-(IBAction)Number0:(id)sender;

-(IBAction)Multiply:(id)sender;
-(IBAction)Divide:(id)sender;
-(IBAction)Subtract:(id)sender;
-(IBAction)Plus:(id)sender;
-(IBAction)Equal:(id)sender;
-(IBAction)AllClear:(id)sender;

@end
