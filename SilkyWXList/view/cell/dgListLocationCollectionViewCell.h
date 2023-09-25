//
//  dgListLocationCollectionViewCell.h
//  SilkyWXList
//
//  Created by Runing on 2019/10/12.
//  Copyright © 2019 Doogore. All rights reserved.
//  定位地址

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface dgListLocationCollectionViewCell : UICollectionViewCell

@property (weak, nonatomic) IBOutlet UILabel *locationLabel;

@property (nonatomic, strong) dgListCellModel *model;

@end

NS_ASSUME_NONNULL_END
