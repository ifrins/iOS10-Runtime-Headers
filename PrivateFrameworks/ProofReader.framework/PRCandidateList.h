/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

@interface PRCandidateList : NSObject {
    NSMutableArray * _candidates;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _defaultReplacementRange;
    unsigned long long  _maxCount;
}

- (void)addCandidate:(id)arg1;
- (void)addCandidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 errorType:(unsigned long long)arg3;
- (void)addCandidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 errorType:(unsigned long long)arg4;
- (void)addCandidateWithString:(id)arg1 errorType:(unsigned long long)arg2;
- (void)addCandidateWithString:(id)arg1 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 errorType:(unsigned long long)arg3;
- (void)addCandidateWithWords:(id)arg1 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 errorType:(unsigned long long)arg3;
- (void)addReplacementCandidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 intendedCharacter:(unsigned short)arg4 actualCharacter:(unsigned short)arg5;
- (void)addTranspositionCandidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 intendedFirstCharacter:(unsigned short)arg4 intendedSecondCharacter:(unsigned short)arg5;
- (id)candidateStrings;
- (id)candidates;
- (unsigned long long)count;
- (void)dealloc;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })defaultReplacementRange;
- (id)description;
- (id)initWithMaxCount:(unsigned long long)arg1 defaultReplacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)isFull;
- (unsigned long long)maxCount;

@end