//
//  UITableView+PASExtras.h
//  ProatomicCore
//
//  Created by Guillermo Sáenz on 5/13/16.
//  Copyright © 2016 Property Atomic Strong SAC. All rights reserved.
//

@import UIKit;

@interface UITableView (PASExtras)

/**
 This method retrieves the indexPath from the cell which contains an specific UIView.
 
 @param view - specified view
 @return NSIndexPath
 */
- (NSIndexPath *)indexPathForCellContainingView:(UIView *)view;

@end
