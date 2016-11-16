#include <iostream>

#include "base/logging.h"
#include "xwalk/runtime/browser/xwalk_special_storage_policy.h"

using namespace xwalk;

XWalkSpecialStoragePolicy::XWalkSpecialStoragePolicy(void) {
   LOG(WARNING) << "XWalkSpecialStoragePolicy::XWalkSpecialStoragePolicy() CONSTRUCTOR CALLED";
}

XWalkSpecialStoragePolicy::~XWalkSpecialStoragePolicy(void) {}

bool XWalkSpecialStoragePolicy::IsStorageProtected(const GURL& origin) {
   LOG(WARNING) << "XWalkSpecialStoragePolicy::IsStorageProtected() CALLED";
  return true;
}

bool XWalkSpecialStoragePolicy::IsStorageUnlimited(const GURL& origin) {
   LOG(WARNING) << "XWalkSpecialStoragePolicy::IsStorageProtected() CALLED";
   return true;
}

bool XWalkSpecialStoragePolicy::IsStorageSessionOnly(const GURL& origin) {
   LOG(WARNING) << "XWalkSpecialStoragePolicy::IsStorageSessionOnly() CALLED";
  return false;
}

bool XWalkSpecialStoragePolicy::CanQueryDiskSize(const GURL& origin) {
   LOG(WARNING) << "XWalkSpecialStoragePolicy::CanQueryDiskSize() CALLED";
  return true;
}

bool XWalkSpecialStoragePolicy::HasIsolatedStorage(const GURL& origin) {
   LOG(WARNING) << "XWalkSpecialStoragePolicy::HasIsolatedStorage() CALLED";
  return true;
}

bool XWalkSpecialStoragePolicy::HasSessionOnlyOrigins() {
   LOG(WARNING) << "XWalkSpecialStoragePolicy::HasSessionOnlyOrigins() CALLED";
  return true;
}

bool XWalkSpecialStoragePolicy::IsStorageDurable(const GURL& origin) {
   LOG(WARNING) << "XWalkSpecialStoragePolicy::IsStorageDurable() CALLED";
  return true;
}
