//
//  dgHeadImageCollectionViewCell.h
//  SilkyWXList
//
//  Created by Runing on 2019/10/10.
//  Copyright © 2019 Doogore. All rights reserved.
//  朋友圈评论提醒

#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface dgHeadImageCollectionViewCell : UICollectionViewCell

@property (nonatomic,strong) UIImageView *headImage;
@property (nonatomic,strong) UIImageView *headAvatar;
@property (nonatomic,strong) UILabel *headUserName;

@property (nonatomic, strong) dgListCellModel *model;

@end

NS_ASSUME_NONNULL_END
