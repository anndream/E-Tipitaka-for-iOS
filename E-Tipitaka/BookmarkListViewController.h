//
//  BookmarkListViewController.h
//  ETipitaka
//
//  Created by Sutee Sudprasert on 3/20/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>


#define kVinaiKey @"พระวินัยปิฎก"
#define kSuttanKey @"พระสุตตันตปิฎก"
#define kAbhidhumKey @"พระอภิธรรมปิฎก"

@class ReadViewController;

typedef enum {
    BY_TEXT, BY_CREATED, BY_VOLUME, ONLY_IMPORTANCE
} sortingType;

@interface BookmarkListViewController : UIViewController 
<UITableViewDataSource, UITableViewDelegate,UITabBarControllerDelegate, UIGestureRecognizerDelegate> {
	NSMutableDictionary *bookmarkData;
	NSString *language;
    ReadViewController *readViewController;
    UITableView *tableView;
    sortingType sorting;
    UISegmentedControl *sortingControl;
    BOOL willReload;
}

@property(nonatomic, strong) NSMutableDictionary *bookmarkData;
@property(nonatomic, strong) NSString *language;
@property(nonatomic, strong) ReadViewController *readViewController;
@property(nonatomic, strong) IBOutlet UITableView *tableView;
@property(nonatomic, strong) IBOutlet UISegmentedControl *sortingControl;


-(IBAction)toggleEdit:(id)sender;
-(IBAction)toggleLanguage:(id)sender;
-(IBAction)editBookmark:(id)sender;
-(IBAction)sortList:(id)sender;

@end


@interface EditBookmarkButton : UIButton {
    NSInteger section;
    NSInteger row;
}

@property(assign) NSInteger section;
@property(assign) NSInteger row;

@end