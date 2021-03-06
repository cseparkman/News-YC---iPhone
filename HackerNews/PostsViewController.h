//
//  ViewController.h
//  HackerNews
//
//  Created by Benjamin Gordon on 5/1/13.
//  Copyright (c) 2013 Benjamin Gordon. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TriangleView.h"
#import "HNTheme.h"
#import "frontPageCell.h"
#import "CommentsCell.h"
#import "Helpers.h"
#import "LinkButton.h"
#import "IIViewDeckController.h"
#import "FailedLoadingView.h"
#import "ARChromeActivity.h"
#import "TUSafariActivity.h"
#import "TTTAttributedLabel.h"

// libHN
#import "libHN.h"

#define kPad 10

#define kLoadingRectNoSubmit CGRectMake(291,17,20,20)
#define kLoadingRectSubmit CGRectMake(249,17,20,20)

@interface PostsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate,UIWebViewDelegate,UIScrollViewDelegate,UIGestureRecognizerDelegate, FrontPageCellDelgate>

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil filterType:(PostFilterType)type;
- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil username:(NSString *)user;

@property (nonatomic, assign) PostFilterType filterType;

@end
