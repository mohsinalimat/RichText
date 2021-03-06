//
//  UILabel+RichText.h
//  Pods-RichText_Example
//
//  Created by zhubch on 2018/2/6.
//

#import <UIKit/UIKit.h>
#import "RTProtocols.h"
#import "RTStyle.h"

@interface UILabel(RichText)

@property(readwrite) id<RTText> richText;
@property(readwrite) RTStyle *style;

@end
