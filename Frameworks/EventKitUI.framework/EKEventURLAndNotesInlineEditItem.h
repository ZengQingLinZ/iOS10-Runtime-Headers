/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventURLAndNotesInlineEditItem : EKEventEditItem {
    EKEventNotesInlineEditItem * _notesEditItem;
    EKEventURLInlineEditItem * _urlEditItem;
}

- (void).cxx_destruct;
- (void)_contentSizeCategoryChanged;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (id)init;
- (bool)isInline;
- (unsigned long long)numberOfSubitems;
- (void)reset;
- (bool)saveAndDismissWithForce:(bool)arg1;
- (void)setCalendarItem:(id)arg1 store:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setSelectedResponder:(id)arg1;

@end
