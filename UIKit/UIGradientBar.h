/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <UIKit/UIView.h>

@class UIImageView;

@interface UIGradientBar : UIView {
	UIImageView* _topShineView;
	UIImageView* _gradientFillView;
}
+(id)bottomLineColor;
-(void)_tile;
-(id)initWithFrame:(CGRect)frame;
-(void)drawRect:(CGRect)rect;
-(void)dealloc;
-(void)setFrame:(CGRect)frame;
-(id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;
@end
