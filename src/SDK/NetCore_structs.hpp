#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NetCore

#include "Basic.hpp"


namespace SDK
{

// Enum NetCore.ENetworkFailure
// NumValues: 0x000C
enum class ENetworkFailure : uint8
{
	NetDriverAlreadyExists                   = 0,
	NetDriverCreateFailure                   = 1,
	NetDriverListenFailure                   = 2,
	ConnectionLost                           = 3,
	ConnectionTimeout                        = 4,
	FailureReceived                          = 5,
	OutdatedClient                           = 6,
	OutdatedServer                           = 7,
	PendingConnectionFailure                 = 8,
	NetGuidMismatch                          = 9,
	NetChecksumMismatch                      = 10,
	ENetworkFailure_MAX                      = 11,
};

// Enum NetCore.EFastArraySerializerDeltaFlags
// NumValues: 0x0005
enum class EFastArraySerializerDeltaFlags : uint8
{
	None                                     = 0,
	HasBeenSerialized                        = 1,
	HasDeltaBeenRequested                    = 2,
	IsUsingDeltaSerialization                = 4,
	EFastArraySerializerDeltaFlags_MAX       = 5,
};

// Enum NetCore.ENetCloseResult
// NumValues: 0x0056
enum class ENetCloseResult : uint8
{
	NetDriverAlreadyExists                   = 0,
	NetDriverCreateFailure                   = 1,
	NetDriverListenFailure                   = 2,
	ConnectionLost                           = 3,
	ConnectionTimeout                        = 4,
	FailureReceived                          = 5,
	OutdatedClient                           = 6,
	OutdatedServer                           = 7,
	PendingConnectionFailure                 = 8,
	NetGuidMismatch                          = 9,
	NetChecksumMismatch                      = 10,
	SecurityMalformedPacket                  = 11,
	SecurityInvalidData                      = 12,
	SecurityClosed                           = 13,
	Unknown                                  = 14,
	Success                                  = 15,
	Extended                                 = 16,
	RPCDoS                                   = 17,
	Cleanup                                  = 18,
	MissingLevelPackage                      = 19,
	PacketHandlerIncomingError               = 20,
	ZeroLastByte                             = 21,
	ZeroSize                                 = 22,
	ReadHeaderFail                           = 23,
	ReadHeaderExtraFail                      = 24,
	AckSequenceMismatch                      = 25,
	BunchBadChannelIndex                     = 26,
	BunchChannelNameFail                     = 27,
	BunchWrongChannelType                    = 28,
	BunchHeaderOverflow                      = 29,
	BunchDataOverflow                        = 30,
	BunchPrematureControlChannel             = 31,
	BunchPrematureChannel                    = 32,
	BunchPrematureControlClose               = 33,
	UnknownChannelType                       = 34,
	PrematureSend                            = 35,
	CorruptData                              = 36,
	SocketSendFailure                        = 37,
	BadChildConnectionIndex                  = 38,
	LogLimitInstant                          = 39,
	LogLimitSustained                        = 40,
	ReceivedNetGUIDBunchFail                 = 41,
	MaxReliableExceeded                      = 42,
	ReceivedNextBunchFail                    = 43,
	ReceivedNextBunchQueueFail               = 44,
	PartialInitialReliableDestroy            = 45,
	PartialMergeReliableDestroy              = 46,
	PartialInitialNonByteAligned             = 47,
	PartialNonByteAligned                    = 48,
	PartialFinalPackageMapExports            = 49,
	PartialTooLarge                          = 50,
	AlreadyOpen                              = 51,
	ReliableBeforeOpen                       = 52,
	ReliableBufferOverflow                   = 53,
	ControlChannelClose                      = 54,
	ControlChannelEndianCheck                = 55,
	ControlChannelPlayerChannelFail          = 56,
	ControlChannelMessageUnknown             = 57,
	ControlChannelMessageFail                = 58,
	ControlChannelMessagePayloadFail         = 59,
	ControlChannelBunchOverflowed            = 60,
	ControlChannelQueueBunchOverflowed       = 61,
	ClientHasMustBeMappedGUIDs               = 62,
	UnregisteredMustBeMappedGUID             = 63,
	ObjectReplicatorReceivedBunchFail        = 64,
	ContentBlockFail                         = 65,
	ContentBlockHeaderRepLayoutFail          = 66,
	ContentBlockHeaderIsActorFail            = 67,
	ContentBlockHeaderObjFail                = 68,
	ContentBlockHeaderPrematureEnd           = 69,
	ContentBlockHeaderSubObjectActor         = 70,
	ContentBlockHeaderBadParent              = 71,
	ContentBlockHeaderInvalidCreate          = 72,
	ContentBlockHeaderStablyNamedFail        = 73,
	ContentBlockHeaderNoSubObjectClass       = 74,
	ContentBlockHeaderUObjectSubObject       = 75,
	ContentBlockHeaderAActorSubObject        = 76,
	ContentBlockHeaderFail                   = 77,
	ContentBlockPayloadBitsFail              = 78,
	FieldHeaderRepIndex                      = 79,
	FieldHeaderBadRepIndex                   = 80,
	FieldHeaderPayloadBitsFail               = 81,
	FieldPayloadFail                         = 82,
	FaultDisconnect                          = 83,
	NotRecoverable                           = 84,
	ENetCloseResult_MAX                      = 85,
};

// ScriptStruct NetCore.StateStruct
// 0x0018 (0x0018 - 0x0000)
struct FStateStruct
{
public:
	uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 StateName;                                         // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FStateStruct) == 0x000008, "Wrong alignment on FStateStruct");
static_assert(sizeof(FStateStruct) == 0x000018, "Wrong size on FStateStruct");
static_assert(offsetof(FStateStruct, StateName) == 0x000008, "Member 'FStateStruct::StateName' has a wrong offset!");

// ScriptStruct NetCore.EscalationState
// 0x0018 (0x0030 - 0x0018)
struct FEscalationState : public FStateStruct
{
public:
	bool                                          bLogEscalate;                                      // 0x0018(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDormant;                                          // 0x0019(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                         CooloffTime;                                       // 0x001A(0x0002)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                         AutoEscalateTime;                                  // 0x001C(0x0002)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                          HighestTimePeriod;                                 // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1F[0x1];                                       // 0x001F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int8>                                  AllTimePeriods;                                    // 0x0020(0x0010)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};
static_assert(alignof(FEscalationState) == 0x000008, "Wrong alignment on FEscalationState");
static_assert(sizeof(FEscalationState) == 0x000030, "Wrong size on FEscalationState");
static_assert(offsetof(FEscalationState, bLogEscalate) == 0x000018, "Member 'FEscalationState::bLogEscalate' has a wrong offset!");
static_assert(offsetof(FEscalationState, bDormant) == 0x000019, "Member 'FEscalationState::bDormant' has a wrong offset!");
static_assert(offsetof(FEscalationState, CooloffTime) == 0x00001A, "Member 'FEscalationState::CooloffTime' has a wrong offset!");
static_assert(offsetof(FEscalationState, AutoEscalateTime) == 0x00001C, "Member 'FEscalationState::AutoEscalateTime' has a wrong offset!");
static_assert(offsetof(FEscalationState, HighestTimePeriod) == 0x00001E, "Member 'FEscalationState::HighestTimePeriod' has a wrong offset!");
static_assert(offsetof(FEscalationState, AllTimePeriods) == 0x000020, "Member 'FEscalationState::AllTimePeriods' has a wrong offset!");

// ScriptStruct NetCore.FastArraySerializerItem
// 0x000C (0x000C - 0x0000)
struct FFastArraySerializerItem
{
public:
	int32                                         ReplicationID;                                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReplicationKey;                                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MostRecentArrayReplicationKey;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FFastArraySerializerItem) == 0x000004, "Wrong alignment on FFastArraySerializerItem");
static_assert(sizeof(FFastArraySerializerItem) == 0x00000C, "Wrong size on FFastArraySerializerItem");
static_assert(offsetof(FFastArraySerializerItem, ReplicationID) == 0x000000, "Member 'FFastArraySerializerItem::ReplicationID' has a wrong offset!");
static_assert(offsetof(FFastArraySerializerItem, ReplicationKey) == 0x000004, "Member 'FFastArraySerializerItem::ReplicationKey' has a wrong offset!");
static_assert(offsetof(FFastArraySerializerItem, MostRecentArrayReplicationKey) == 0x000008, "Member 'FFastArraySerializerItem::MostRecentArrayReplicationKey' has a wrong offset!");

// ScriptStruct NetCore.FastArraySerializer
// 0x0108 (0x0108 - 0x0000)
struct alignas(0x08) FFastArraySerializer
{
public:
	uint8                                         Pad_0[0x54];                                       // 0x0000(0x0054)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ArrayReplicationKey;                               // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_58[0xA8];                                      // 0x0058(0x00A8)(Fixing Size After Last Property [ Dumper-7 ])
	EFastArraySerializerDeltaFlags                DeltaFlags;                                        // 0x0100(0x0001)(ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FFastArraySerializer) == 0x000008, "Wrong alignment on FFastArraySerializer");
static_assert(sizeof(FFastArraySerializer) == 0x000108, "Wrong size on FFastArraySerializer");
static_assert(offsetof(FFastArraySerializer, ArrayReplicationKey) == 0x000054, "Member 'FFastArraySerializer::ArrayReplicationKey' has a wrong offset!");
static_assert(offsetof(FFastArraySerializer, DeltaFlags) == 0x000100, "Member 'FFastArraySerializer::DeltaFlags' has a wrong offset!");

// ScriptStruct NetCore.NetAnalyticsDataConfig
// 0x000C (0x000C - 0x0000)
struct FNetAnalyticsDataConfig final
{
public:
	class FName                                   DataName;                                          // 0x0000(0x0008)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnabled;                                          // 0x0008(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FNetAnalyticsDataConfig) == 0x000004, "Wrong alignment on FNetAnalyticsDataConfig");
static_assert(sizeof(FNetAnalyticsDataConfig) == 0x00000C, "Wrong size on FNetAnalyticsDataConfig");
static_assert(offsetof(FNetAnalyticsDataConfig, DataName) == 0x000000, "Member 'FNetAnalyticsDataConfig::DataName' has a wrong offset!");
static_assert(offsetof(FNetAnalyticsDataConfig, bEnabled) == 0x000008, "Member 'FNetAnalyticsDataConfig::bEnabled' has a wrong offset!");

// ScriptStruct NetCore.NetFaultState
// 0x0010 (0x0040 - 0x0030)
struct FNetFaultState final : public FEscalationState
{
public:
	bool                                          bCloseConnection;                                  // 0x0030(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x1];                                       // 0x0031(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int16                                         EscalateQuotaFaultsPerPeriod;                      // 0x0032(0x0002)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                          EscalateQuotaFaultPercentPerPeriod;                // 0x0034(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_35[0x1];                                       // 0x0035(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int16                                         DescalateQuotaFaultsPerPeriod;                     // 0x0036(0x0002)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                          DescalateQuotaFaultPercentPerPeriod;               // 0x0038(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                          EscalateQuotaTimePeriod;                           // 0x0039(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3A[0x6];                                       // 0x003A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FNetFaultState) == 0x000008, "Wrong alignment on FNetFaultState");
static_assert(sizeof(FNetFaultState) == 0x000040, "Wrong size on FNetFaultState");
static_assert(offsetof(FNetFaultState, bCloseConnection) == 0x000030, "Member 'FNetFaultState::bCloseConnection' has a wrong offset!");
static_assert(offsetof(FNetFaultState, EscalateQuotaFaultsPerPeriod) == 0x000032, "Member 'FNetFaultState::EscalateQuotaFaultsPerPeriod' has a wrong offset!");
static_assert(offsetof(FNetFaultState, EscalateQuotaFaultPercentPerPeriod) == 0x000034, "Member 'FNetFaultState::EscalateQuotaFaultPercentPerPeriod' has a wrong offset!");
static_assert(offsetof(FNetFaultState, DescalateQuotaFaultsPerPeriod) == 0x000036, "Member 'FNetFaultState::DescalateQuotaFaultsPerPeriod' has a wrong offset!");
static_assert(offsetof(FNetFaultState, DescalateQuotaFaultPercentPerPeriod) == 0x000038, "Member 'FNetFaultState::DescalateQuotaFaultPercentPerPeriod' has a wrong offset!");
static_assert(offsetof(FNetFaultState, EscalateQuotaTimePeriod) == 0x000039, "Member 'FNetFaultState::EscalateQuotaTimePeriod' has a wrong offset!");

}

