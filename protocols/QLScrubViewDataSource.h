/* Generated by RuntimeBrowser.
 */

@protocol QLScrubViewDataSource

@required

- (long long)numberOfPagesInScrubView:(QLScrubView *)arg1;
- (struct CGSize { double x1; double x2; })scrubView:(QLScrubView *)arg1 pageSizeAtIndex:(unsigned long long)arg2;
- (QLThumbnailOperation *)scrubView:(QLScrubView *)arg1 thumbnailOperationForPageAtIndex:(unsigned long long)arg2;

@end
