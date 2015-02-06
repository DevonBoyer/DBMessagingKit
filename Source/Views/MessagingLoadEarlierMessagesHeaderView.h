//
//  MessagingLoadEarlierMessagesHeaderView.h
//
//
//  GitHub
//  https://github.com/DevonBoyer/DBMessagingKit
//
//
//  Created by Devon Boyer on 2014-09-26.
//  Copyright (c) 2014 Devon Boyer. All rights reserved.
//
//  Released under an MIT license: http://opensource.org/licenses/MIT
//

#import <UIKit/UIKit.h>

@interface MessagingLoadEarlierMessagesHeaderView : UICollectionReusableView

+ (CGFloat)heightForHeader;

- (void)startAnimating;
- (void)stopAnimating;

@end
