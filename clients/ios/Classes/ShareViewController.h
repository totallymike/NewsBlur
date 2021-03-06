//
//  ShareViewController.h
//  NewsBlur
//
//  Created by Roy Yang on 6/21/12.
//  Copyright (c) 2012 NewsBlur. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NewsBlurAppDelegate.h"

@interface ShareViewController : UIViewController <ASIHTTPRequestDelegate, UITextViewDelegate> {
    NewsBlurAppDelegate *appDelegate;
    NSString *activeReplyId;
}

@property (nonatomic) IBOutlet UITextView *commentField;
@property (nonatomic) IBOutlet NewsBlurAppDelegate *appDelegate;
@property (nonatomic) IBOutlet UIButton *facebookButton;
@property (nonatomic) IBOutlet UIButton *twitterButton;
@property (nonatomic) IBOutlet UIButton *appdotnetButton;
@property (nonatomic) IBOutlet UIBarButtonItem *submitButton;
@property (nonatomic) IBOutlet UILabel *storyTitle;
@property (nonatomic) NSString * activeReplyId;
@property (nonatomic) NSString* currentType;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *keyboardHeight;

- (void)setCommentType:(NSString *)type;
- (void)setSiteInfo:(NSString *)type setUserId:(NSString *)userId setUsername:(NSString *)username setReplyId:(NSString *)commentIndex;
- (void)clearComments;
- (IBAction)doCancelButton:(id)sender;
- (IBAction)doToggleButton:(id)sender;
- (IBAction)doShareThisStory:(id)sender;
- (IBAction)doReplyToComment:(id)sender;
- (void)finishShareThisStory:(ASIHTTPRequest *)request;
- (void)finishAddReply:(ASIHTTPRequest *)request;
- (void)requestFailed:(ASIHTTPRequest *)request;
- (void)replaceStory:(NSDictionary *)newStory withReplyId:(NSString *)replyId;
- (void)adjustShareButtons;
- (void)adjustCommentField;
- (NSString *)stringByStrippingHTML:(NSString *)s;

@end
