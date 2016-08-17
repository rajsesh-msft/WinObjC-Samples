//******************************************************************************
//
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.
//
// This code is licensed under the MIT License (MIT).
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//******************************************************************************


#import <UIKit/UIKit.h>

extern const float ANIM_DURATION_BOUNCE;
extern const float ANIM_DURATION_NOBOUNCE;

@interface UIView (Additions)

- (UIImage *) renderImage;

/**
 Animates the views with UIView singleton block: [UIView animateLayout...
 */
+ (void) animateWithBounce:(BOOL)bounce
                   options:(UIViewAnimationOptions)options
                animations:(void (^)(void))animations;

+ (void) animateWithBounce:(BOOL)bounce
                   options:(UIViewAnimationOptions)options
                  duration:(NSTimeInterval)duration
                animations:(void (^)(void))animations
                completion:(void (^)(void))completion;

/**
 Animates the view's constraints by calling layoutIfNeeded.
 */
- (void) animateLayoutIfNeededWithBounce:(BOOL)bounce
                                 options:(UIViewAnimationOptions)options
                              animations:(void (^)(void))animations;

- (void) animateLayoutIfNeededWithDuration:(NSTimeInterval)duration
                                    bounce:(BOOL)bounce
                                   options:(UIViewAnimationOptions)options
                                animations:(void (^)(void))animations
                                completion:(void (^)(void))completion;

@end