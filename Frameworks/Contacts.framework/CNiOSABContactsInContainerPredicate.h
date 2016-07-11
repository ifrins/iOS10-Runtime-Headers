/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSABContactsInContainerPredicate : CNPredicate <CNiOSContactPredicate> {
    NSString * _parentContainerIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *parentContainerIdentifier;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (struct __CFArray { }*)cn_copyPeopleInAddressBook:(void*)arg1 withSortOrder:(unsigned int)arg2 matchInfos:(id*)arg3 options:(unsigned long long)arg4 error:(struct __CFError {}**)arg5;
- (bool)cn_supportsNativeSorting;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithParentContainerIdentifier:(id)arg1;
- (id)parentContainerIdentifier;

@end