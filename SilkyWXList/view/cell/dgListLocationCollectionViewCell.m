//
//  dgListLocationCollectionViewCell.m
//  SilkyWXList
//
//  Created by Runing on 2019/10/12.
//  Copyright © 2019 Doogore. All rights reserved.
//

#import "dgListLocationCollectionViewCell.h"

@implementation dgListLocationCollectionViewCell

- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
}

- (void)setModel:(dgListCellModel *)model {
    self.locationLabel.text = model.llocation;
}

@end
