//
//  NSDate+PASExtras.h
//  ProatomicCore
//
//  Created by Guillermo Sáenz on 5/13/16.
//  Copyright © 2016 Property Atomic Strong SAC. All rights reserved.
//

@import Foundation;

@interface NSDate (PASExtras)

/**
 *  Return if the date is later than the otherDate param
 *
 *  @param otherDate date to compare to
 *
 *  @return YES or NO
 */
- (BOOL)isLaterThan:(NSDate *)otherDate;

/**
 *  Return if the date is earlier than the otherDate param
 *
 *  @param otherDate date to compare to
 *
 *  @return YES or NO
 */
- (BOOL)isEarlierThan:(NSDate *)otherDate;

/**
 This method returns an NSDate with an specified format and timezone.
 
 @param format - date format expressed as NSString
 @param timeZone - date timezone expressed as NSString
 @param string - date string
 @return NSDate
 */
+ (instancetype)dateWithFormat:(NSString *)format timeZone:(NSString*)timeZone string:(NSString*)string;

/**
 This method returns the last NSDate of the month, from an specified NSDate.
 
 @param date - NSDate input
 @return NSDate
 */
+ (instancetype)dateLastOfMonthOfDate:(NSDate *)date;

/**
 This method returns a date string with an specified format
 
 @param format - this specifies the date format as NSString
 @return NSString
 */
- (NSString *)stringWithFormat:(NSString *)format;

/**
 * @return Current date as a string
 */
+ (NSString*)stringCurrentDate;

/**
 This method returns an NSDate with a day number, month number, year number, hour number, minute number and second number.
 
 @param day - NSNumber for the day
 @param month - NSNumber for month
 @param year - NSNumber for year
 @param hour - NSNumber for hour
 @param minute - NSNumber for minute
 @param second - NSNumber for seconds
 @return NSDate
 */
+ (instancetype)dateWithDay:(NSNumber *)day month:(NSNumber *)month year:(NSNumber *)year hour:(NSNumber *)hour minute:(NSNumber *)minute second:(NSNumber *)second;

/**
 This method returns the number of days until the end of the month
 
 @return NSInteger
 */
+ (NSInteger)numberOfDaysToEndOfMonth;

/**
 This method returns the difference in days, months, years or any NSCalendarUnit specified.
 
 @param date - NSDate to compare
 @param componentUnit - NSCalendarUnit (days, months, years, etc.)
 @return NSInteger
 */
- (NSInteger)differenceWithDate:(NSDate *)date forComponentUnit:(NSCalendarUnit)componentUnit;

@end
