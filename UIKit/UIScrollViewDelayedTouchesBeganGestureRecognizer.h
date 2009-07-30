/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIGestureRecognizer.h"

@class UIDelayedAction;

@interface UIScrollViewDelayedTouchesBeganGestureRecognizer : UIGestureRecognizer {
	UIDelayedAction* _touchDelay;
}
-(void)clearTimer;
-(void)sendTouchesShouldBegin;
-(void)enoughTimeElapsed:(id)elapsed;
-(void)dealloc;
-(void)reset;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(BOOL)_shouldSaveGestureFromExclusion:(id)exclusion;
@end
