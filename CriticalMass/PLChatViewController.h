//
//  PLChatViewController.h
//  CriticalMaps
//
//  Created by Norman Sander on 18.01.15.
//  Copyright (c) 2015 Pokus Labs. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PLChatViewController : UIViewController<UITableViewDataSource, UITableViewDataSource>

@property (nonatomic, strong) UITableView *tableView;

@end