//
//  JEOrderedDictionary.h
//  JEToolkit
//
//  Created by John Rommel Estropia on 2013/10/19.
//  Copyright (c) 2013 John Rommel Estropia. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JEOrderedDictionary : NSMutableDictionary

/*! Returns the object for the first key added to the dictionary
 @return The object for the first key added to the receiver or nil if the dictionary is empty
 */
- (id)firstObject;

/*! Returns the object for the last key added to the dictionary
 @return The object for the last key added to the receiver or nil if the dictionary is empty
 */
- (id)lastObject;

/*! Returns the object at the specified index of the receiver.
 This method is the same as objectAtIndex:
 @param idx The index of the object to be retrieved
 @return If idx is beyond the end of the dictionary (that is, if idx is greater than or equal to the value returned by count), an NSRangeException is raised.
 */
- (id)objectAtIndexedSubscript:(NSUInteger)idx;

/*! Returns the object at the specified index of the receiver
 @param idx The index of the object to be retrieved
 @return If idx is beyond the end of the dictionary (that is, if idx is greater than or equal to the value returned by count), an NSRangeException is raised.
 */
- (id)objectAtIndex:(NSUInteger)idx;

/*! Returns the first key added to the dictionary
 @return The first key added to the receiver or nil if the dictionary is empty
 */
- (id)firstKey;

/*! Returns the last key added to the dictionary
 @return The last key added to the receiver or nil if the dictionary is empty
 */
- (id)lastKey;

/*! Returns the key at the specified index of the receiver
 @param idx The index of the key to be retrieved
 @return If idx is beyond the end of the dictionary (that is, if idx is greater than or equal to the value returned by count), an NSRangeException is raised.
 */
- (id)keyAtIndex:(NSUInteger)idx;

/*! Returns the index of the specified key
 @param key The key
 @return The index whose corresponding key value is equal to key. If none of the objects in the dictionary is equal to key, returns NSNotFound.
 */
- (NSUInteger)indexOfKey:(id)key;

/*! Applies a given block object to the entries of the dictionary.
 If the block sets *stop to YES, the enumeration stops.
 @param block A block object to operate on entries in the dictionary.
 */
- (void)enumerateIndexesAndKeysAndObjectsUsingBlock:(void (^)(NSUInteger idx, id key, id obj, BOOL *stop))block;

/*! Applies a given block object to the entries of the dictionary.
 If the block sets *stop to YES, the enumeration stops.
 @param opts Enumeration options.
 @param block A block object to operate on entries in the dictionary.
 */
- (void)enumerateIndexesAndKeysAndObjectsWithOptions:(NSEnumerationOptions)opts
                                          usingBlock:(void (^)(NSUInteger idx, id key, id obj, BOOL *stop))block;

/*! Applies a given block object to the entries of the dictionary at the specified indexes
 If the block sets *stop to YES, the enumeration stops.
 @param opts The indexes of the objects over which to enumerate.
 @param opts Enumeration options.
 @param block A block object to operate on entries in the dictionary.
 */
- (void)enumerateIndexesAndKeysAndObjectsAtIndexes:(NSIndexSet *)indexes
                                           options:(NSEnumerationOptions)opts
                                        usingBlock:(void (^)(NSUInteger idx, id key, id obj, BOOL *stop))block;

@end