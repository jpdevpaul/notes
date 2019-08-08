#include "types.h"

/// address: 0x47B0A8
///
/// PL_Prefix contains the data related to each item prefix.
///
/// PSX ref (SLPS-01416): 0x80112744
/// PSX def: PLStruct PL_Prefix[84]
extern ItemAffixData PL_Prefix[84]; // alias: item_prefix_data

/// address: 0x47C068
///
/// PL_Suffix contains the data related to each item suffix.
///
/// PSX ref (SLPS-01416): 0x80113464
/// PSX def: PLStruct PL_Suffix[96]
extern ItemAffixData PL_Suffix[96]; // alias: item_suffix_data

/// address: 0x47D268
///
/// UniqueItemList contains the data related to each unique item ID.
///
/// PSX ref (SLPS-01416): 0x80114364
/// PSX def: UItemStruct UniqueItemList[91]
extern UniqueItemData UniqueItemList[91]; // alias: unique_item_data
