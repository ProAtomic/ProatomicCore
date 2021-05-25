//
//  UITableViewCell+PASExtras.h
//  ProatomicCore
//
//  Created by Guillermo Sáenz on 6/16/16.
//  Copyright © 2016 Property Atomic Strong SAC. All rights reserved.
//

@import UIKit;

@interface UITableViewCell (PASExtras)

/**
 Parent tableview
 */
@property (weak, nonatomic, readonly) UITableView *tableView;

@end
