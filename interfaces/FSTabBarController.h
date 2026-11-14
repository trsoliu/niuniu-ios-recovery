// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c3cd0
@interface FSTabBarController : UITabBarController <FSTabBarDelegate>

// property fsTabBar: T@"FSTabBar",R,N,V_fsTabBar
// property fsDelegate: T@"<FSTabBarControllerDelegate>",W,N,V_fsDelegate
// property hash: TQ,R
// property superclass: T#,R
// property description: T@"NSString",R,C
// property debugDescription: T@"NSString",?,R,C

// 0x10006d25c; encoding: @16@0:8
- (id)init;
// 0x10006d2ac; encoding: v16@0:8
- (void)prepareFSTabBar;
// 0x10006d380; encoding: v24@0:8@16
- (void)rebuildFSTabBarItemsForViewControllers:(id)arg1;
// 0x10006d4f0; encoding: v20@0:8B16
- (void)viewDidAppear:(BOOL)arg1;
// 0x10006d574; encoding: @24@0:8@16
- (id)viewControllerForFSTabBarItem:(id)arg1;
// 0x10006d634; encoding: v24@0:8@16
- (void)setSelectedFSTabBarItem:(id)arg1;
// 0x10006d684; encoding: v32@0:8@16@24
- (void)tabBar:(id)arg1 didSelectFSItem:(id)arg2;
// 0x10006d7b4; encoding: v32@0:8@16@24
- (void)tabBar:(id)arg1 doubleTappedFSItem:(id)arg2;
// 0x10006d868; encoding: v24@0:8@16
- (void)setViewControllers:(id)arg1;
// 0x10006d8cc; encoding: v28@0:8@16B24
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
// 0x10006d900; encoding: v24@0:8Q16
- (void)setSelectedIndex:(unsigned long long)arg1;
// 0x10006d9f4; encoding: v24@0:8@16
- (void)setSelectedViewController:(id)arg1;
// 0x10006dae8; encoding: @16@0:8
- (id)fsTabBar;
// 0x10006daf8; encoding: @16@0:8
- (id)fsDelegate;
// 0x10006db18; encoding: v24@0:8@16
- (void)setFsDelegate:(id)arg1;
// 0x10006db2c; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct

@end
