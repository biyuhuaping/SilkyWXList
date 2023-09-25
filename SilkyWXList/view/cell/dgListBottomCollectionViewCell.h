//
//  dgListBottomCollectionViewCell.h
//  SilkyWXList
//
//  Created by Runing on 2019/10/10.
//  Copyright © 2019 Doogore. All rights reserved.
//  发布时间

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface dgListBottomCollectionViewCell : UICollectionViewCell

@property (weak, nonatomic) IBOutlet UILabel *publicTime;

@property (nonatomic, strong) dgListCellModel *model;

@end

NS_ASSUME_NONNULL_END
