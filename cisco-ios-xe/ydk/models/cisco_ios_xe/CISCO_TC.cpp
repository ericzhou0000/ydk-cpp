
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_TC.hpp"

namespace ydk {
namespace CISCO_TC {

const Enum::YLeaf CiscoportlistrangeEnum::oneto2k {1, "oneto2k"};
const Enum::YLeaf CiscoportlistrangeEnum::twoKto4K {2, "twoKto4K"};
const Enum::YLeaf CiscoportlistrangeEnum::fourKto6K {3, "fourKto6K"};
const Enum::YLeaf CiscoportlistrangeEnum::sixKto8K {4, "sixKto8K"};
const Enum::YLeaf CiscoportlistrangeEnum::eightKto10K {5, "eightKto10K"};
const Enum::YLeaf CiscoportlistrangeEnum::tenKto12K {6, "tenKto12K"};
const Enum::YLeaf CiscoportlistrangeEnum::twelveKto14K {7, "twelveKto14K"};
const Enum::YLeaf CiscoportlistrangeEnum::fourteenKto16K {8, "fourteenKto16K"};

const Enum::YLeaf CisconetworkprotocolEnum::ip {1, "ip"};
const Enum::YLeaf CisconetworkprotocolEnum::decnet {2, "decnet"};
const Enum::YLeaf CisconetworkprotocolEnum::pup {3, "pup"};
const Enum::YLeaf CisconetworkprotocolEnum::chaos {4, "chaos"};
const Enum::YLeaf CisconetworkprotocolEnum::xns {5, "xns"};
const Enum::YLeaf CisconetworkprotocolEnum::x121 {6, "x121"};
const Enum::YLeaf CisconetworkprotocolEnum::appletalk {7, "appletalk"};
const Enum::YLeaf CisconetworkprotocolEnum::clns {8, "clns"};
const Enum::YLeaf CisconetworkprotocolEnum::lat {9, "lat"};
const Enum::YLeaf CisconetworkprotocolEnum::vines {10, "vines"};
const Enum::YLeaf CisconetworkprotocolEnum::cons {11, "cons"};
const Enum::YLeaf CisconetworkprotocolEnum::apollo {12, "apollo"};
const Enum::YLeaf CisconetworkprotocolEnum::stun {13, "stun"};
const Enum::YLeaf CisconetworkprotocolEnum::novell {14, "novell"};
const Enum::YLeaf CisconetworkprotocolEnum::qllc {15, "qllc"};
const Enum::YLeaf CisconetworkprotocolEnum::snapshot {16, "snapshot"};
const Enum::YLeaf CisconetworkprotocolEnum::atmIlmi {17, "atmIlmi"};
const Enum::YLeaf CisconetworkprotocolEnum::bstun {18, "bstun"};
const Enum::YLeaf CisconetworkprotocolEnum::x25pvc {19, "x25pvc"};
const Enum::YLeaf CisconetworkprotocolEnum::ipv6 {20, "ipv6"};
const Enum::YLeaf CisconetworkprotocolEnum::cdm {21, "cdm"};
const Enum::YLeaf CisconetworkprotocolEnum::nbf {22, "nbf"};
const Enum::YLeaf CisconetworkprotocolEnum::bpxIgx {23, "bpxIgx"};
const Enum::YLeaf CisconetworkprotocolEnum::clnsPfx {24, "clnsPfx"};
const Enum::YLeaf CisconetworkprotocolEnum::http {25, "http"};
const Enum::YLeaf CisconetworkprotocolEnum::unknown {65535, "unknown"};

const Enum::YLeaf CiscorowoperstatusEnum::active {1, "active"};
const Enum::YLeaf CiscorowoperstatusEnum::activeDependencies {2, "activeDependencies"};
const Enum::YLeaf CiscorowoperstatusEnum::inactiveDependency {3, "inactiveDependency"};
const Enum::YLeaf CiscorowoperstatusEnum::missingDependency {4, "missingDependency"};

const Enum::YLeaf CiscolocationclassEnum::chassis {1, "chassis"};
const Enum::YLeaf CiscolocationclassEnum::shelf {2, "shelf"};
const Enum::YLeaf CiscolocationclassEnum::slot {3, "slot"};
const Enum::YLeaf CiscolocationclassEnum::subSlot {4, "subSlot"};
const Enum::YLeaf CiscolocationclassEnum::port {5, "port"};
const Enum::YLeaf CiscolocationclassEnum::subPort {6, "subPort"};
const Enum::YLeaf CiscolocationclassEnum::channel {7, "channel"};
const Enum::YLeaf CiscolocationclassEnum::subChannel {8, "subChannel"};

const Enum::YLeaf IfoperstatusreasonEnum::other {1, "other"};
const Enum::YLeaf IfoperstatusreasonEnum::none {2, "none"};
const Enum::YLeaf IfoperstatusreasonEnum::hwFailure {3, "hwFailure"};
const Enum::YLeaf IfoperstatusreasonEnum::loopbackDiagFailure {4, "loopbackDiagFailure"};
const Enum::YLeaf IfoperstatusreasonEnum::errorDisabled {5, "errorDisabled"};
const Enum::YLeaf IfoperstatusreasonEnum::swFailure {6, "swFailure"};
const Enum::YLeaf IfoperstatusreasonEnum::linkFailure {7, "linkFailure"};
const Enum::YLeaf IfoperstatusreasonEnum::offline {8, "offline"};
const Enum::YLeaf IfoperstatusreasonEnum::nonParticipating {9, "nonParticipating"};
const Enum::YLeaf IfoperstatusreasonEnum::initializing {10, "initializing"};
const Enum::YLeaf IfoperstatusreasonEnum::vsanInactive {11, "vsanInactive"};
const Enum::YLeaf IfoperstatusreasonEnum::adminDown {12, "adminDown"};
const Enum::YLeaf IfoperstatusreasonEnum::channelAdminDown {13, "channelAdminDown"};
const Enum::YLeaf IfoperstatusreasonEnum::channelOperSuspended {14, "channelOperSuspended"};
const Enum::YLeaf IfoperstatusreasonEnum::channelConfigurationInProgress {15, "channelConfigurationInProgress"};
const Enum::YLeaf IfoperstatusreasonEnum::rcfInProgress {16, "rcfInProgress"};
const Enum::YLeaf IfoperstatusreasonEnum::elpFailureIsolation {17, "elpFailureIsolation"};
const Enum::YLeaf IfoperstatusreasonEnum::escFailureIsolation {18, "escFailureIsolation"};
const Enum::YLeaf IfoperstatusreasonEnum::domainOverlapIsolation {19, "domainOverlapIsolation"};
const Enum::YLeaf IfoperstatusreasonEnum::domainAddrAssignFailureIsolation {20, "domainAddrAssignFailureIsolation"};
const Enum::YLeaf IfoperstatusreasonEnum::domainOtherSideEportIsolation {21, "domainOtherSideEportIsolation"};
const Enum::YLeaf IfoperstatusreasonEnum::domainInvalidRcfReceived {22, "domainInvalidRcfReceived"};
const Enum::YLeaf IfoperstatusreasonEnum::domainManagerDisabled {23, "domainManagerDisabled"};
const Enum::YLeaf IfoperstatusreasonEnum::zoneMergeFailureIsolation {24, "zoneMergeFailureIsolation"};
const Enum::YLeaf IfoperstatusreasonEnum::vsanMismatchIsolation {25, "vsanMismatchIsolation"};
const Enum::YLeaf IfoperstatusreasonEnum::parentDown {26, "parentDown"};
const Enum::YLeaf IfoperstatusreasonEnum::srcPortNotBound {27, "srcPortNotBound"};
const Enum::YLeaf IfoperstatusreasonEnum::interfaceRemoved {28, "interfaceRemoved"};
const Enum::YLeaf IfoperstatusreasonEnum::fcotNotPresent {29, "fcotNotPresent"};
const Enum::YLeaf IfoperstatusreasonEnum::fcotVendorNotSupported {30, "fcotVendorNotSupported"};
const Enum::YLeaf IfoperstatusreasonEnum::incompatibleAdminMode {31, "incompatibleAdminMode"};
const Enum::YLeaf IfoperstatusreasonEnum::incompatibleAdminSpeed {32, "incompatibleAdminSpeed"};
const Enum::YLeaf IfoperstatusreasonEnum::suspendedByMode {33, "suspendedByMode"};
const Enum::YLeaf IfoperstatusreasonEnum::suspendedBySpeed {34, "suspendedBySpeed"};
const Enum::YLeaf IfoperstatusreasonEnum::suspendedByWWN {35, "suspendedByWWN"};
const Enum::YLeaf IfoperstatusreasonEnum::domainMaxReTxFailure {36, "domainMaxReTxFailure"};
const Enum::YLeaf IfoperstatusreasonEnum::eppFailure {37, "eppFailure"};
const Enum::YLeaf IfoperstatusreasonEnum::portVsanMismatchIsolation {38, "portVsanMismatchIsolation"};
const Enum::YLeaf IfoperstatusreasonEnum::loopbackIsolation {39, "loopbackIsolation"};
const Enum::YLeaf IfoperstatusreasonEnum::upgradeInProgress {40, "upgradeInProgress"};
const Enum::YLeaf IfoperstatusreasonEnum::incompatibleAdminRxBbCredit {41, "incompatibleAdminRxBbCredit"};
const Enum::YLeaf IfoperstatusreasonEnum::incompatibleAdminRxBufferSize {42, "incompatibleAdminRxBufferSize"};
const Enum::YLeaf IfoperstatusreasonEnum::portChannelMembersDown {43, "portChannelMembersDown"};
const Enum::YLeaf IfoperstatusreasonEnum::zoneRemoteNoRespIsolation {44, "zoneRemoteNoRespIsolation"};
const Enum::YLeaf IfoperstatusreasonEnum::firstPortUpAsEport {45, "firstPortUpAsEport"};
const Enum::YLeaf IfoperstatusreasonEnum::firstPortNotUp {46, "firstPortNotUp"};
const Enum::YLeaf IfoperstatusreasonEnum::peerFCIPPortClosedConnection {47, "peerFCIPPortClosedConnection"};
const Enum::YLeaf IfoperstatusreasonEnum::peerFCIPPortResetConnection {48, "peerFCIPPortResetConnection"};
const Enum::YLeaf IfoperstatusreasonEnum::fcipPortMaxReTx {49, "fcipPortMaxReTx"};
const Enum::YLeaf IfoperstatusreasonEnum::fcipPortKeepAliveTimerExpire {50, "fcipPortKeepAliveTimerExpire"};
const Enum::YLeaf IfoperstatusreasonEnum::fcipPortPersistTimerExpire {51, "fcipPortPersistTimerExpire"};
const Enum::YLeaf IfoperstatusreasonEnum::fcipPortSrcLinkDown {52, "fcipPortSrcLinkDown"};
const Enum::YLeaf IfoperstatusreasonEnum::fcipPortSrcAdminDown {53, "fcipPortSrcAdminDown"};
const Enum::YLeaf IfoperstatusreasonEnum::fcipPortAdminCfgChange {54, "fcipPortAdminCfgChange"};
const Enum::YLeaf IfoperstatusreasonEnum::fcipSrcPortRemoved {55, "fcipSrcPortRemoved"};
const Enum::YLeaf IfoperstatusreasonEnum::fcipSrcModuleNotOnline {56, "fcipSrcModuleNotOnline"};
const Enum::YLeaf IfoperstatusreasonEnum::invalidConfig {57, "invalidConfig"};
const Enum::YLeaf IfoperstatusreasonEnum::portBindFailure {58, "portBindFailure"};
const Enum::YLeaf IfoperstatusreasonEnum::portFabricBindFailure {59, "portFabricBindFailure"};
const Enum::YLeaf IfoperstatusreasonEnum::noCommonVsanIsolation {60, "noCommonVsanIsolation"};
const Enum::YLeaf IfoperstatusreasonEnum::ficonVsanDown {61, "ficonVsanDown"};
const Enum::YLeaf IfoperstatusreasonEnum::invalidAttachment {62, "invalidAttachment"};
const Enum::YLeaf IfoperstatusreasonEnum::portBlocked {63, "portBlocked"};
const Enum::YLeaf IfoperstatusreasonEnum::incomAdminRxBbCreditPerBuf {64, "incomAdminRxBbCreditPerBuf"};
const Enum::YLeaf IfoperstatusreasonEnum::tooManyInvalidFlogis {65, "tooManyInvalidFlogis"};
const Enum::YLeaf IfoperstatusreasonEnum::deniedDueToPortBinding {66, "deniedDueToPortBinding"};
const Enum::YLeaf IfoperstatusreasonEnum::elpFailureRevMismatch {67, "elpFailureRevMismatch"};
const Enum::YLeaf IfoperstatusreasonEnum::elpFailureClassFParamErr {68, "elpFailureClassFParamErr"};
const Enum::YLeaf IfoperstatusreasonEnum::elpFailureClassNParamErr {69, "elpFailureClassNParamErr"};
const Enum::YLeaf IfoperstatusreasonEnum::elpFailureUnknownFlowCtlCode {70, "elpFailureUnknownFlowCtlCode"};
const Enum::YLeaf IfoperstatusreasonEnum::elpFailureInvalidFlowCtlParam {71, "elpFailureInvalidFlowCtlParam"};
const Enum::YLeaf IfoperstatusreasonEnum::elpFailureInvalidPortName {72, "elpFailureInvalidPortName"};
const Enum::YLeaf IfoperstatusreasonEnum::elpFailureInvalidSwitchName {73, "elpFailureInvalidSwitchName"};
const Enum::YLeaf IfoperstatusreasonEnum::elpFailureRatovEdtovMismatch {74, "elpFailureRatovEdtovMismatch"};
const Enum::YLeaf IfoperstatusreasonEnum::elpFailureLoopbackDetected {75, "elpFailureLoopbackDetected"};
const Enum::YLeaf IfoperstatusreasonEnum::elpFailureInvalidTxBbCredit {76, "elpFailureInvalidTxBbCredit"};
const Enum::YLeaf IfoperstatusreasonEnum::elpFailureInvalidPayloadSize {77, "elpFailureInvalidPayloadSize"};
const Enum::YLeaf IfoperstatusreasonEnum::bundleMisCfg {78, "bundleMisCfg"};
const Enum::YLeaf IfoperstatusreasonEnum::bitErrRuntimeThreshExceeded {79, "bitErrRuntimeThreshExceeded"};
const Enum::YLeaf IfoperstatusreasonEnum::linkFailLinkReset {80, "linkFailLinkReset"};
const Enum::YLeaf IfoperstatusreasonEnum::linkFailPortInitFail {81, "linkFailPortInitFail"};
const Enum::YLeaf IfoperstatusreasonEnum::linkFailPortUnusable {82, "linkFailPortUnusable"};
const Enum::YLeaf IfoperstatusreasonEnum::linkFailLossOfSignal {83, "linkFailLossOfSignal"};
const Enum::YLeaf IfoperstatusreasonEnum::linkFailLossOfSync {84, "linkFailLossOfSync"};
const Enum::YLeaf IfoperstatusreasonEnum::linkFailNosRcvd {85, "linkFailNosRcvd"};
const Enum::YLeaf IfoperstatusreasonEnum::linkFailOLSRcvd {86, "linkFailOLSRcvd"};
const Enum::YLeaf IfoperstatusreasonEnum::linkFailDebounceTimeout {87, "linkFailDebounceTimeout"};
const Enum::YLeaf IfoperstatusreasonEnum::linkFailLrRcvd {88, "linkFailLrRcvd"};
const Enum::YLeaf IfoperstatusreasonEnum::linkFailCreditLoss {89, "linkFailCreditLoss"};
const Enum::YLeaf IfoperstatusreasonEnum::linkFailRxQOverflow {90, "linkFailRxQOverflow"};
const Enum::YLeaf IfoperstatusreasonEnum::linkFailTooManyInterrupts {91, "linkFailTooManyInterrupts"};
const Enum::YLeaf IfoperstatusreasonEnum::linkFailLipRcvdBb {92, "linkFailLipRcvdBb"};
const Enum::YLeaf IfoperstatusreasonEnum::linkFailBbCreditLoss {93, "linkFailBbCreditLoss"};
const Enum::YLeaf IfoperstatusreasonEnum::linkFailOpenPrimSignalTimeout {94, "linkFailOpenPrimSignalTimeout"};
const Enum::YLeaf IfoperstatusreasonEnum::linkFailOpenPrimSignalReturned {95, "linkFailOpenPrimSignalReturned"};
const Enum::YLeaf IfoperstatusreasonEnum::linkFailLipF8Rcvd {96, "linkFailLipF8Rcvd"};
const Enum::YLeaf IfoperstatusreasonEnum::linkFailLineCardPortShutdown {97, "linkFailLineCardPortShutdown"};
const Enum::YLeaf IfoperstatusreasonEnum::fcspAuthenfailure {98, "fcspAuthenfailure"};
const Enum::YLeaf IfoperstatusreasonEnum::fcotChecksumError {99, "fcotChecksumError"};
const Enum::YLeaf IfoperstatusreasonEnum::ohmsExtLoopbackTest {100, "ohmsExtLoopbackTest"};
const Enum::YLeaf IfoperstatusreasonEnum::invalidFabricBindExchange {101, "invalidFabricBindExchange"};
const Enum::YLeaf IfoperstatusreasonEnum::tovMismatch {102, "tovMismatch"};
const Enum::YLeaf IfoperstatusreasonEnum::ficonNotEnabled {103, "ficonNotEnabled"};
const Enum::YLeaf IfoperstatusreasonEnum::ficonNoPortNumber {104, "ficonNoPortNumber"};
const Enum::YLeaf IfoperstatusreasonEnum::ficonBeingEnabled {105, "ficonBeingEnabled"};
const Enum::YLeaf IfoperstatusreasonEnum::ePortProhibited {106, "ePortProhibited"};
const Enum::YLeaf IfoperstatusreasonEnum::portGracefulShutdown {107, "portGracefulShutdown"};
const Enum::YLeaf IfoperstatusreasonEnum::trunkNotFullyActive {108, "trunkNotFullyActive"};
const Enum::YLeaf IfoperstatusreasonEnum::fabricBindingSwitchWwnNotFound {109, "fabricBindingSwitchWwnNotFound"};
const Enum::YLeaf IfoperstatusreasonEnum::fabricBindingDomainInvalid {110, "fabricBindingDomainInvalid"};
const Enum::YLeaf IfoperstatusreasonEnum::fabricBindingDbMismatch {111, "fabricBindingDbMismatch"};
const Enum::YLeaf IfoperstatusreasonEnum::fabricBindingNoRspFromPeer {112, "fabricBindingNoRspFromPeer"};
const Enum::YLeaf IfoperstatusreasonEnum::dpvmVsanSuspended {113, "dpvmVsanSuspended"};
const Enum::YLeaf IfoperstatusreasonEnum::dpvmVsanNotFound {114, "dpvmVsanNotFound"};
const Enum::YLeaf IfoperstatusreasonEnum::trackedPortDown {115, "trackedPortDown"};
const Enum::YLeaf IfoperstatusreasonEnum::ecSuspendedOnLoop {116, "ecSuspendedOnLoop"};
const Enum::YLeaf IfoperstatusreasonEnum::isolateBundleMisCfg {117, "isolateBundleMisCfg"};
const Enum::YLeaf IfoperstatusreasonEnum::noPeerBundleSupport {118, "noPeerBundleSupport"};
const Enum::YLeaf IfoperstatusreasonEnum::portBringupIsolation {119, "portBringupIsolation"};
const Enum::YLeaf IfoperstatusreasonEnum::domainNotAllowedIsolated {120, "domainNotAllowedIsolated"};
const Enum::YLeaf IfoperstatusreasonEnum::virtualIvrDomainOverlapIsolation {121, "virtualIvrDomainOverlapIsolation"};
const Enum::YLeaf IfoperstatusreasonEnum::outOfService {122, "outOfService"};
const Enum::YLeaf IfoperstatusreasonEnum::portAuthFailed {123, "portAuthFailed"};
const Enum::YLeaf IfoperstatusreasonEnum::bundleStandby {124, "bundleStandby"};
const Enum::YLeaf IfoperstatusreasonEnum::portConnectorTypeErr {125, "portConnectorTypeErr"};
const Enum::YLeaf IfoperstatusreasonEnum::errorDisabledReInitLmtReached {126, "errorDisabledReInitLmtReached"};
const Enum::YLeaf IfoperstatusreasonEnum::ficonDupPortNum {127, "ficonDupPortNum"};
const Enum::YLeaf IfoperstatusreasonEnum::localRcf {128, "localRcf"};
const Enum::YLeaf IfoperstatusreasonEnum::twoSwitchesWithSameWWN {129, "twoSwitchesWithSameWWN"};
const Enum::YLeaf IfoperstatusreasonEnum::invalidOtherSidePrincEFPReqRecd {130, "invalidOtherSidePrincEFPReqRecd"};
const Enum::YLeaf IfoperstatusreasonEnum::domainOther {131, "domainOther"};
const Enum::YLeaf IfoperstatusreasonEnum::elpFailureAllZeroPeerWWNRcvd {132, "elpFailureAllZeroPeerWWNRcvd"};
const Enum::YLeaf IfoperstatusreasonEnum::preferredPathIsolation {133, "preferredPathIsolation"};
const Enum::YLeaf IfoperstatusreasonEnum::fcRedirectIsolation {134, "fcRedirectIsolation"};
const Enum::YLeaf IfoperstatusreasonEnum::portActLicenseNotAvailable {135, "portActLicenseNotAvailable"};
const Enum::YLeaf IfoperstatusreasonEnum::sdmIsolation {136, "sdmIsolation"};
const Enum::YLeaf IfoperstatusreasonEnum::fcidAllocationFailed {137, "fcidAllocationFailed"};
const Enum::YLeaf IfoperstatusreasonEnum::externallyDisabled {138, "externallyDisabled"};
const Enum::YLeaf IfoperstatusreasonEnum::unavailableNPVUpstreamPort {139, "unavailableNPVUpstreamPort"};
const Enum::YLeaf IfoperstatusreasonEnum::unavailableNPVPrefUpstreamPort {140, "unavailableNPVPrefUpstreamPort"};
const Enum::YLeaf IfoperstatusreasonEnum::sfpReadError {141, "sfpReadError"};
const Enum::YLeaf IfoperstatusreasonEnum::stickyDownOnLinkFailure {142, "stickyDownOnLinkFailure"};
const Enum::YLeaf IfoperstatusreasonEnum::tooManyLinkFlapsErr {143, "tooManyLinkFlapsErr"};
const Enum::YLeaf IfoperstatusreasonEnum::unidirectionalUDLD {144, "unidirectionalUDLD"};
const Enum::YLeaf IfoperstatusreasonEnum::txRxLoopUDLD {145, "txRxLoopUDLD"};
const Enum::YLeaf IfoperstatusreasonEnum::neighborMismatchUDLD {146, "neighborMismatchUDLD"};
const Enum::YLeaf IfoperstatusreasonEnum::authzPending {147, "authzPending"};
const Enum::YLeaf IfoperstatusreasonEnum::hotStdbyInBundle {148, "hotStdbyInBundle"};
const Enum::YLeaf IfoperstatusreasonEnum::incompleteConfig {149, "incompleteConfig"};
const Enum::YLeaf IfoperstatusreasonEnum::incompleteTunnelCfg {150, "incompleteTunnelCfg"};
const Enum::YLeaf IfoperstatusreasonEnum::hwProgrammingFailed {151, "hwProgrammingFailed"};
const Enum::YLeaf IfoperstatusreasonEnum::tunnelDstUnreachable {152, "tunnelDstUnreachable"};
const Enum::YLeaf IfoperstatusreasonEnum::suspendByMtu {153, "suspendByMtu"};
const Enum::YLeaf IfoperstatusreasonEnum::sfpInvalid {154, "sfpInvalid"};
const Enum::YLeaf IfoperstatusreasonEnum::sfpAbsent {155, "sfpAbsent"};
const Enum::YLeaf IfoperstatusreasonEnum::portCapabilitiesUnknown {156, "portCapabilitiesUnknown"};
const Enum::YLeaf IfoperstatusreasonEnum::channelErrDisabled {157, "channelErrDisabled"};
const Enum::YLeaf IfoperstatusreasonEnum::vrfMismatch {158, "vrfMismatch"};
const Enum::YLeaf IfoperstatusreasonEnum::vrfForwardReferencing {159, "vrfForwardReferencing"};
const Enum::YLeaf IfoperstatusreasonEnum::dupTunnelConfigDetected {160, "dupTunnelConfigDetected"};
const Enum::YLeaf IfoperstatusreasonEnum::primaryVLANDown {161, "primaryVLANDown"};
const Enum::YLeaf IfoperstatusreasonEnum::vrfUnusable {162, "vrfUnusable"};
const Enum::YLeaf IfoperstatusreasonEnum::errDisableHandShkFailure {163, "errDisableHandShkFailure"};
const Enum::YLeaf IfoperstatusreasonEnum::errDisabledBPDUGuard {164, "errDisabledBPDUGuard"};
const Enum::YLeaf IfoperstatusreasonEnum::dot1xSecViolationErrDisabled {165, "dot1xSecViolationErrDisabled"};
const Enum::YLeaf IfoperstatusreasonEnum::emptyEchoUDLD {166, "emptyEchoUDLD"};
const Enum::YLeaf IfoperstatusreasonEnum::vfTaggingCapErr {167, "vfTaggingCapErr"};
const Enum::YLeaf IfoperstatusreasonEnum::portDisabled {168, "portDisabled"};
const Enum::YLeaf IfoperstatusreasonEnum::tunnelModeNotConfigured {169, "tunnelModeNotConfigured"};
const Enum::YLeaf IfoperstatusreasonEnum::tunnelSrcNotConfigured {170, "tunnelSrcNotConfigured"};
const Enum::YLeaf IfoperstatusreasonEnum::tunnelDstNotConfigured {171, "tunnelDstNotConfigured"};
const Enum::YLeaf IfoperstatusreasonEnum::tunnelUnableToResolveSrcIP {172, "tunnelUnableToResolveSrcIP"};
const Enum::YLeaf IfoperstatusreasonEnum::tunnelUnableToResolveDstIP {173, "tunnelUnableToResolveDstIP"};
const Enum::YLeaf IfoperstatusreasonEnum::tunnelVrfDown {174, "tunnelVrfDown"};
const Enum::YLeaf IfoperstatusreasonEnum::sifAdminDown {175, "sifAdminDown"};
const Enum::YLeaf IfoperstatusreasonEnum::phyIntfDown {176, "phyIntfDown"};
const Enum::YLeaf IfoperstatusreasonEnum::ifSifLimitExceeded {177, "ifSifLimitExceeded"};
const Enum::YLeaf IfoperstatusreasonEnum::sifHoldDown {178, "sifHoldDown"};
const Enum::YLeaf IfoperstatusreasonEnum::noFcoe {179, "noFcoe"};
const Enum::YLeaf IfoperstatusreasonEnum::dcxCompatMismatch {180, "dcxCompatMismatch"};
const Enum::YLeaf IfoperstatusreasonEnum::isolateBundleLimitExceeded {181, "isolateBundleLimitExceeded"};
const Enum::YLeaf IfoperstatusreasonEnum::sifNotBound {182, "sifNotBound"};
const Enum::YLeaf IfoperstatusreasonEnum::errDisabledLacpMiscfg {183, "errDisabledLacpMiscfg"};
const Enum::YLeaf IfoperstatusreasonEnum::satFabricIfDown {184, "satFabricIfDown"};
const Enum::YLeaf IfoperstatusreasonEnum::invalidSatFabricIf {185, "invalidSatFabricIf"};
const Enum::YLeaf IfoperstatusreasonEnum::noRemoteChassis {186, "noRemoteChassis"};
const Enum::YLeaf IfoperstatusreasonEnum::vicEnableNotReceived {187, "vicEnableNotReceived"};
const Enum::YLeaf IfoperstatusreasonEnum::vicDisableReceived {188, "vicDisableReceived"};
const Enum::YLeaf IfoperstatusreasonEnum::vlanVsanMappingNotEnabled {189, "vlanVsanMappingNotEnabled"};
const Enum::YLeaf IfoperstatusreasonEnum::stpNotFwdingInFcoeMappedVlan {190, "stpNotFwdingInFcoeMappedVlan"};
const Enum::YLeaf IfoperstatusreasonEnum::moduleOffline {191, "moduleOffline"};
const Enum::YLeaf IfoperstatusreasonEnum::udldAggModeLinkFailure {192, "udldAggModeLinkFailure"};
const Enum::YLeaf IfoperstatusreasonEnum::stpInconsVpcPeerDisabled {193, "stpInconsVpcPeerDisabled"};
const Enum::YLeaf IfoperstatusreasonEnum::setPortStateFailed {194, "setPortStateFailed"};
const Enum::YLeaf IfoperstatusreasonEnum::suspendedByVpc {195, "suspendedByVpc"};
const Enum::YLeaf IfoperstatusreasonEnum::vpcCfgInProgress {196, "vpcCfgInProgress"};
const Enum::YLeaf IfoperstatusreasonEnum::vpcPeerLinkDown {197, "vpcPeerLinkDown"};
const Enum::YLeaf IfoperstatusreasonEnum::vpcNoRspFromPeer {198, "vpcNoRspFromPeer"};
const Enum::YLeaf IfoperstatusreasonEnum::protoPortSuspend {199, "protoPortSuspend"};
const Enum::YLeaf IfoperstatusreasonEnum::tunnelSrcDown {200, "tunnelSrcDown"};
const Enum::YLeaf IfoperstatusreasonEnum::cdpInfoUnavailable {201, "cdpInfoUnavailable"};
const Enum::YLeaf IfoperstatusreasonEnum::fexSfpInvalid {202, "fexSfpInvalid"};
const Enum::YLeaf IfoperstatusreasonEnum::errDisabledIpConflict {203, "errDisabledIpConflict"};
const Enum::YLeaf IfoperstatusreasonEnum::fcotClkRateMismatch {204, "fcotClkRateMismatch"};
const Enum::YLeaf IfoperstatusreasonEnum::portGuardTrustSecViolation {205, "portGuardTrustSecViolation"};
const Enum::YLeaf IfoperstatusreasonEnum::sdpTimeout {206, "sdpTimeout"};
const Enum::YLeaf IfoperstatusreasonEnum::satIncompatTopo {207, "satIncompatTopo"};
const Enum::YLeaf IfoperstatusreasonEnum::waitForFlogi {208, "waitForFlogi"};
const Enum::YLeaf IfoperstatusreasonEnum::satNotConfigured {209, "satNotConfigured"};
const Enum::YLeaf IfoperstatusreasonEnum::npivNotEnabledInUpstream {210, "npivNotEnabledInUpstream"};
const Enum::YLeaf IfoperstatusreasonEnum::vsanMismatchWithUpstreamSwPort {211, "vsanMismatchWithUpstreamSwPort"};
const Enum::YLeaf IfoperstatusreasonEnum::portGuardBitErrRate {212, "portGuardBitErrRate"};
const Enum::YLeaf IfoperstatusreasonEnum::portGuardSigLoss {213, "portGuardSigLoss"};
const Enum::YLeaf IfoperstatusreasonEnum::portGuardSyncLoss {214, "portGuardSyncLoss"};
const Enum::YLeaf IfoperstatusreasonEnum::portGuardLinkReset {215, "portGuardLinkReset"};
const Enum::YLeaf IfoperstatusreasonEnum::portGuardCreditLoss {216, "portGuardCreditLoss"};
const Enum::YLeaf IfoperstatusreasonEnum::ipQosMgrPolicyAppFailure {217, "ipQosMgrPolicyAppFailure"};
const Enum::YLeaf IfoperstatusreasonEnum::pauseRateLimitErrDisabled {218, "pauseRateLimitErrDisabled"};
const Enum::YLeaf IfoperstatusreasonEnum::lstGrpUplinkDown {219, "lstGrpUplinkDown"};
const Enum::YLeaf IfoperstatusreasonEnum::stickyDnLinkFailure {220, "stickyDnLinkFailure"};
const Enum::YLeaf IfoperstatusreasonEnum::routerMacFailure {221, "routerMacFailure"};
const Enum::YLeaf IfoperstatusreasonEnum::dcxMultipleMsapIds {222, "dcxMultipleMsapIds"};
const Enum::YLeaf IfoperstatusreasonEnum::dcxHundredPdusRcvdNoAck {223, "dcxHundredPdusRcvdNoAck"};
const Enum::YLeaf IfoperstatusreasonEnum::enmSatIncompatibleUplink {224, "enmSatIncompatibleUplink"};
const Enum::YLeaf IfoperstatusreasonEnum::enmLoopDetected {225, "enmLoopDetected"};
const Enum::YLeaf IfoperstatusreasonEnum::nonStickyExternallyDisabled {226, "nonStickyExternallyDisabled"};
const Enum::YLeaf IfoperstatusreasonEnum::subGroupIdNotAssigned {227, "subGroupIdNotAssigned"};
const Enum::YLeaf IfoperstatusreasonEnum::vemUnlicensed {228, "vemUnlicensed"};
const Enum::YLeaf IfoperstatusreasonEnum::profileNotFound {229, "profileNotFound"};
const Enum::YLeaf IfoperstatusreasonEnum::nonExistentVlan {230, "nonExistentVlan"};
const Enum::YLeaf IfoperstatusreasonEnum::vlanInvalidType {231, "vlanInvalidType"};
const Enum::YLeaf IfoperstatusreasonEnum::vlanDown {232, "vlanDown"};
const Enum::YLeaf IfoperstatusreasonEnum::vpcPeerUpgrade {233, "vpcPeerUpgrade"};
const Enum::YLeaf IfoperstatusreasonEnum::ipQosDcbxpCompatFailure {234, "ipQosDcbxpCompatFailure"};
const Enum::YLeaf IfoperstatusreasonEnum::nonCiscoHbaVfTag {235, "nonCiscoHbaVfTag"};
const Enum::YLeaf IfoperstatusreasonEnum::domainIdConfigMismatch {236, "domainIdConfigMismatch"};
const Enum::YLeaf IfoperstatusreasonEnum::sfpSpeedMismatch {237, "sfpSpeedMismatch"};
const Enum::YLeaf IfoperstatusreasonEnum::xcvrInitializing {238, "xcvrInitializing"};
const Enum::YLeaf IfoperstatusreasonEnum::xcvrAbsent {239, "xcvrAbsent"};
const Enum::YLeaf IfoperstatusreasonEnum::xcvrInvalid {240, "xcvrInvalid"};
const Enum::YLeaf IfoperstatusreasonEnum::vfcBindingInvalid {241, "vfcBindingInvalid"};
const Enum::YLeaf IfoperstatusreasonEnum::vlanNotFcoeEnabled {242, "vlanNotFcoeEnabled"};
const Enum::YLeaf IfoperstatusreasonEnum::pvlanNativeVlanErr {243, "pvlanNativeVlanErr"};
const Enum::YLeaf IfoperstatusreasonEnum::ethL2VlanDown {244, "ethL2VlanDown"};
const Enum::YLeaf IfoperstatusreasonEnum::ethIntfInvalidBinding {245, "ethIntfInvalidBinding"};
const Enum::YLeaf IfoperstatusreasonEnum::pmonFailure {246, "pmonFailure"};
const Enum::YLeaf IfoperstatusreasonEnum::l3NotReady {247, "l3NotReady"};
const Enum::YLeaf IfoperstatusreasonEnum::speedMismatch {248, "speedMismatch"};
const Enum::YLeaf IfoperstatusreasonEnum::flowControlMismatch {249, "flowControlMismatch"};
const Enum::YLeaf IfoperstatusreasonEnum::vdcMode {250, "vdcMode"};
const Enum::YLeaf IfoperstatusreasonEnum::suspendedDueToMinLinks {251, "suspendedDueToMinLinks"};
const Enum::YLeaf IfoperstatusreasonEnum::enmPinFailLinkDown {252, "enmPinFailLinkDown"};
const Enum::YLeaf IfoperstatusreasonEnum::inactiveM1PortFpathActiveVlan {253, "inactiveM1PortFpathActiveVlan"};
const Enum::YLeaf IfoperstatusreasonEnum::parentPortDown {254, "parentPortDown"};
const Enum::YLeaf IfoperstatusreasonEnum::moduleRemoved {255, "moduleRemoved"};
const Enum::YLeaf IfoperstatusreasonEnum::corePortMct {256, "corePortMct"};
const Enum::YLeaf IfoperstatusreasonEnum::nonCorePortMct {257, "nonCorePortMct"};
const Enum::YLeaf IfoperstatusreasonEnum::ficonInorderNotActive {258, "ficonInorderNotActive"};
const Enum::YLeaf IfoperstatusreasonEnum::invalidEncapsulation {259, "invalidEncapsulation"};
const Enum::YLeaf IfoperstatusreasonEnum::modemLineDeasserted {260, "modemLineDeasserted"};
const Enum::YLeaf IfoperstatusreasonEnum::ipSecHndshkInProgress {261, "ipSecHndshkInProgress"};
const Enum::YLeaf IfoperstatusreasonEnum::sfpEthCompliantErr {262, "sfpEthCompliantErr"};
const Enum::YLeaf IfoperstatusreasonEnum::cellularModemUnattached {263, "cellularModemUnattached"};
const Enum::YLeaf IfoperstatusreasonEnum::outOfGlblRxBuffers {264, "outOfGlblRxBuffers"};
const Enum::YLeaf IfoperstatusreasonEnum::sfpFcCompliantErr {265, "sfpFcCompliantErr"};
const Enum::YLeaf IfoperstatusreasonEnum::ethIntfNotLicensed {266, "ethIntfNotLicensed"};
const Enum::YLeaf IfoperstatusreasonEnum::domainIdsInvalid {267, "domainIdsInvalid"};
const Enum::YLeaf IfoperstatusreasonEnum::fabricNameInvalid {268, "fabricNameInvalid"};

const Enum::YLeaf CiscoalarmseverityEnum::cleared {1, "cleared"};
const Enum::YLeaf CiscoalarmseverityEnum::indeterminate {2, "indeterminate"};
const Enum::YLeaf CiscoalarmseverityEnum::critical {3, "critical"};
const Enum::YLeaf CiscoalarmseverityEnum::major {4, "major"};
const Enum::YLeaf CiscoalarmseverityEnum::minor {5, "minor"};
const Enum::YLeaf CiscoalarmseverityEnum::warning {6, "warning"};
const Enum::YLeaf CiscoalarmseverityEnum::info {7, "info"};


}
}
