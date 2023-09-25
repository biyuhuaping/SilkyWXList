//
//  dgListContentCollectionViewCell.h
//  SilkyWXList
//
//  Created by Runing on 2019/10/10.
//  Copyright © 2019 Doogore. All rights reserved.
//  头像、昵称、文字、图片

#import <UIKit/UIKit.h>
#import "dgNinePhotoView.h"

NS_ASSUME_NONNULL_BEGIN

@interface dgListContentCollectionViewCell : UICollectionViewCell

@property (nonatomic,strong) UIImageView *avatorImage;
@property (nonatomic,strong) UILabel *userName;
@property (nonatomic,strong) UILabel *lContent;
@property (nonatomic,strong) dgNinePhotoView *npv;
@property (nonatomic,assign) CGFloat cellHeight;

@property (nonatomic, strong) dgListCellModel *model;

@end

NS_ASSUME_NONNULL_END
