/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLForeignKey : NSSQLColumn {
    NSSQLToOne * _toOne;
}

- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (void)dealloc;
- (id)initForReadOnlyFetchingOfEntity:(id)arg1 toOneRelationship:(id)arg2;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (id)initWithEntity:(id)arg1 toOneRelationship:(id)arg2;
- (id)toOneRelationship;

@end