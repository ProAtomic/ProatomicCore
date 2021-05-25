//
//  UICollectionViewCell+PASExtras.h
//  ProatomicCore
//
//  Created by Guillermo Sáenz on 6/16/16.
//  Copyright © 2016 Property Atomic Strong SAC. All rights reserved.
//

@import UIKit;

@interface UICollectionViewCell (PASExtras)

/**
 This is a reference to the parent collectionView
 */
@property (weak, nonatomic, readonly) UICollectionView *collectionView;

@end
