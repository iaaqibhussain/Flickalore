//
//  FKFlickrGroupsDiscussTopicsAdd.h
//  FlickrKit
//
//  Generated by FKAPIBuilder.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef NS_ENUM(NSInteger, FKFlickrGroupsDiscussTopicsAddError) {
	FKFlickrGroupsDiscussTopicsAddError_GroupNotFound = 1,		 /* The group by that ID does not exist
 */
	FKFlickrGroupsDiscussTopicsAddError_CannotPostToGroup = 2,		 /* Either this account is not a member of the group, or discussion in this group is disabled. */
	FKFlickrGroupsDiscussTopicsAddError_MessageIsTooLong = 3,		 /* The post message is too long. */
	FKFlickrGroupsDiscussTopicsAddError_MissingRequiredArguments = 4,		 /* Subject and message are required. */
	FKFlickrGroupsDiscussTopicsAddError_SSLIsRequired = 95,		 /* SSL is required to access the Flickr API. */
	FKFlickrGroupsDiscussTopicsAddError_InvalidSignature = 96,		 /* The passed signature was invalid. */
	FKFlickrGroupsDiscussTopicsAddError_MissingSignature = 97,		 /* The call required signing but no signature was sent. */
	FKFlickrGroupsDiscussTopicsAddError_LoginFailedOrInvalidAuthToken = 98,		 /* The login details or auth token passed were invalid. */
	FKFlickrGroupsDiscussTopicsAddError_UserNotLoggedInOrInsufficientPermissions = 99,		 /* The method requires user authentication but the user was not logged in, or the authenticated method call did not have the required permissions. */
	FKFlickrGroupsDiscussTopicsAddError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrGroupsDiscussTopicsAddError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrGroupsDiscussTopicsAddError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrGroupsDiscussTopicsAddError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrGroupsDiscussTopicsAddError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrGroupsDiscussTopicsAddError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrGroupsDiscussTopicsAddError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrGroupsDiscussTopicsAddError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

};

/*

Post a new discussion topic to a group.




*/
@interface FKFlickrGroupsDiscussTopicsAdd : NSObject <FKFlickrAPIMethod>

/* The NSID or path alias of the group to add a topic to.
 */
@property (nonatomic, copy) NSString *group_id; /* (Required) */

/* The topic subject. */
@property (nonatomic, copy) NSString *subject; /* (Required) */

/* The topic message. */
@property (nonatomic, copy) NSString *message; /* (Required) */


@end