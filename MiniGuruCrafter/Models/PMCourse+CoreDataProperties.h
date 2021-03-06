//
//  PMCourse+CoreDataProperties.h
//  MiniGuruCrafter
//
//  Created by Pavel on 08.02.2018.
//  Copyright © 2018 Pavel Maiboroda. All rights reserved.
//
//

#import "PMCourse+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface PMCourse (CoreDataProperties)

+ (NSFetchRequest<PMCourse *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *branch;
@property (nullable, nonatomic, copy) NSString *name;
@property (nullable, nonatomic, copy) NSString *subject;
@property (nullable, nonatomic, retain) NSSet<PMUser *> *students;
@property (nullable, nonatomic, retain) PMTeacher *teacher;

@end

@interface PMCourse (CoreDataGeneratedAccessors)

- (void)addStudentsObject:(PMUser *)value;
- (void)removeStudentsObject:(PMUser *)value;
- (void)addStudents:(NSSet<PMUser *> *)values;
- (void)removeStudents:(NSSet<PMUser *> *)values;

@end

NS_ASSUME_NONNULL_END
