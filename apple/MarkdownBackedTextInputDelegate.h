#import <React/RCTBackedTextInputDelegate.h>
#import <React/RCTUITextView.h>

NS_ASSUME_NONNULL_BEGIN

@interface MarkdownBackedTextInputDelegate : NSObject <RCTBackedTextInputDelegate>

- (instancetype)initWithTextView:(RCTUITextView *)textView;

@property (nonatomic, copy) NSArray<NSValue *> *protectedRanges;
@property (nonatomic, copy) NSArray<NSValue *> *protectedInsertionRanges;
@property (nonatomic, copy, nullable) void (^onProtectedTextChange)(NSRange attemptedRange, NSString *replacementText, NSRange protectedRange);

@end

NS_ASSUME_NONNULL_END
