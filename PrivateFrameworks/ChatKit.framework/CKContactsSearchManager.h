/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKContactsSearchManager : NSObject <MFContactsSearchConsumer> {
    bool  _biasForOutgoingInteraction;
    NSArray * _conversationCache;
    NSNumber * _currentSearchTaskID;
    <CKContactsSearchManagerDelegate> * _delegate;
    NSArray * _enteredRecipients;
    MFContactsSearchManager * _searchManager;
    NSMutableArray * _searchResults;
    NSString * _searchText;
    bool  _suppressGroupSuggestions;
}

@property (nonatomic) bool biasForOutgoingInteraction;
@property (nonatomic, copy) NSArray *conversationCache;
@property (nonatomic, retain) NSNumber *currentSearchTaskID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKContactsSearchManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *enteredRecipients;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MFContactsSearchManager *searchManager;
@property (nonatomic, retain) NSMutableArray *searchResults;
@property (nonatomic, retain) NSString *searchText;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressGroupSuggestions;

- (void).cxx_destruct;
- (void)_generateConversationCache;
- (id)_sortResultsByDate:(id)arg1;
- (id)_sortSearchResultsWithCoreRecentsResults:(id)arg1 displayNameMatches:(id)arg2 participantNameMatches:(id)arg3;
- (void)beganNetworkActivity;
- (bool)biasForOutgoingInteraction;
- (void)cancelSearch;
- (void)chatStateChanged:(id)arg1;
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;
- (id)conversationCache;
- (id)currentSearchTaskID;
- (void)dealloc;
- (id)delegate;
- (void)didSelectRecipient:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)endedNetworkActivity;
- (id)enteredRecipients;
- (void)finishedSearchingForAutocompleteResults;
- (void)finishedTaskWithID:(id)arg1;
- (id)init;
- (void)removeRecipient:(id)arg1;
- (id)searchManager;
- (id)searchResults;
- (id)searchText;
- (void)searchWithText:(id)arg1;
- (void)setBiasForOutgoingInteraction:(bool)arg1;
- (void)setConversationCache:(id)arg1;
- (void)setCurrentSearchTaskID:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnteredRecipients:(id)arg1;
- (void)setSearchManager:(id)arg1;
- (void)setSearchResults:(id)arg1;
- (void)setSearchText:(id)arg1;
- (void)setSuppressGroupSuggestions:(bool)arg1;
- (bool)suppressGroupSuggestions;

@end
