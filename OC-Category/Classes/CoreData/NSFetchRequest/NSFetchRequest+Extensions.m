//
//  NSFetchRequest+Extensions.m
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import "NSFetchRequest+Extensions.h"

@implementation NSFetchRequest(Extensions)
+ (id)fetchRequestWithEntity:(NSEntityDescription *)entity
{
  return [[self alloc] initWithEntity:entity predicate:nil sortDescriptors:nil];
}

+ (id)fetchRequestWithEntity:(NSEntityDescription *)entity predicate:(NSPredicate *)predicate
{
  return [[self alloc] initWithEntity:entity predicate:predicate sortDescriptors:nil];
}

+ (id)fetchRequestWithEntity:(NSEntityDescription *)entity sortDescriptors:(NSArray *)sortDescriptors
{
  return [[self alloc] initWithEntity:entity predicate:nil sortDescriptors:sortDescriptors];
}

+ (id)fetchRequestWithEntity:(NSEntityDescription *)entity predicate:(NSPredicate *)predicate sortDescriptors:(NSArray *)sortDescriptors
{
  return [[self alloc] initWithEntity:entity predicate:predicate sortDescriptors:sortDescriptors];
}

- (id)initWithEntity:(NSEntityDescription *)entity predicate:(NSPredicate *)predicate sortDescriptors:(NSArray *)sortDescriptors
{
  self = [self init];
  if(self)
  {
    self.entity = entity;
    self.predicate = predicate;
    self.sortDescriptors = sortDescriptors;
  }
  
  return self;
}

@end