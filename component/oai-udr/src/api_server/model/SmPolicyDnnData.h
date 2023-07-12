/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this
 * file except in compliance with the License. You may obtain a copy of the
 * License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */
/**
 * Nudr_DataRepository API OpenAPI file
 * Unified Data Repository Service. © 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * SmPolicyDnnData.h
 *
 * Contains the SM policy data for a given DNN (and S-NSSAI).
 */

#ifndef SmPolicyDnnData_H_
#define SmPolicyDnnData_H_

#include <map>
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

#include "ChargingInformation.h"
#include "LimitIdToMonitoringKey.h"
#include "PresenceInfo.h"

namespace oai::udr::model {

/// <summary>
/// Contains the SM policy data for a given DNN (and S-NSSAI).
/// </summary>
class SmPolicyDnnData {
 public:
  SmPolicyDnnData();
  virtual ~SmPolicyDnnData();

  void validate();

  /////////////////////////////////////////////
  /// SmPolicyDnnData members

  /// <summary>
  ///
  /// </summary>
  std::string getDnn() const;
  void setDnn(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string>& getAllowedServices();
  void setAllowedServices(std::vector<std::string> const& value);
  bool allowedServicesIsSet() const;
  void unsetAllowedServices();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string>& getSubscCats();
  void setSubscCats(std::vector<std::string> const& value);
  bool subscCatsIsSet() const;
  void unsetSubscCats();
  /// <summary>
  ///
  /// </summary>
  std::string getGbrUl() const;
  void setGbrUl(std::string const& value);
  bool gbrUlIsSet() const;
  void unsetGbrUl();
  /// <summary>
  ///
  /// </summary>
  std::string getGbrDl() const;
  void setGbrDl(std::string const& value);
  bool gbrDlIsSet() const;
  void unsetGbrDl();
  /// <summary>
  ///
  /// </summary>
  bool isAdcSupport() const;
  void setAdcSupport(bool const value);
  bool adcSupportIsSet() const;
  void unsetAdcSupport();
  /// <summary>
  ///
  /// </summary>
  bool isSubscSpendingLimits() const;
  void setSubscSpendingLimits(bool const value);
  bool subscSpendingLimitsIsSet() const;
  void unsetSubscSpendingLimits();
  /// <summary>
  ///
  /// </summary>
  int32_t getIpv4Index() const;
  void setIpv4Index(int32_t const value);
  bool ipv4IndexIsSet() const;
  void unsetIpv4Index();
  /// <summary>
  ///
  /// </summary>
  int32_t getIpv6Index() const;
  void setIpv6Index(int32_t const value);
  bool ipv6IndexIsSet() const;
  void unsetIpv6Index();
  /// <summary>
  ///
  /// </summary>
  bool isOffline() const;
  void setOffline(bool const value);
  bool offlineIsSet() const;
  void unsetOffline();
  /// <summary>
  ///
  /// </summary>
  bool isOnline() const;
  void setOnline(bool const value);
  bool onlineIsSet() const;
  void unsetOnline();
  /// <summary>
  ///
  /// </summary>
  ChargingInformation getChfInfo() const;
  void setChfInfo(ChargingInformation const& value);
  bool chfInfoIsSet() const;
  void unsetChfInfo();
  /// <summary>
  ///
  /// </summary>
  std::map<std::string, LimitIdToMonitoringKey>& getRefUmDataLimitIds();
  void setRefUmDataLimitIds(
      std::map<std::string, LimitIdToMonitoringKey> const& value);
  bool refUmDataLimitIdsIsSet() const;
  void unsetRefUmDataLimitIds();
  /// <summary>
  ///
  /// </summary>
  bool isMpsPriority() const;
  void setMpsPriority(bool const value);
  bool mpsPriorityIsSet() const;
  void unsetMpsPriority();
  /// <summary>
  ///
  /// </summary>
  bool isMcsPriority() const;
  void setMcsPriority(bool const value);
  bool mcsPriorityIsSet() const;
  void unsetMcsPriority();
  /// <summary>
  ///
  /// </summary>
  bool isImsSignallingPrio() const;
  void setImsSignallingPrio(bool const value);
  bool imsSignallingPrioIsSet() const;
  void unsetImsSignallingPrio();
  /// <summary>
  ///
  /// </summary>
  int32_t getMpsPriorityLevel() const;
  void setMpsPriorityLevel(int32_t const value);
  bool mpsPriorityLevelIsSet() const;
  void unsetMpsPriorityLevel();
  /// <summary>
  ///
  /// </summary>
  int32_t getMcsPriorityLevel() const;
  void setMcsPriorityLevel(int32_t const value);
  bool mcsPriorityLevelIsSet() const;
  void unsetMcsPriorityLevel();
  /// <summary>
  ///
  /// </summary>
  std::map<std::string, PresenceInfo>& getPraInfos();
  void setPraInfos(std::map<std::string, PresenceInfo> const& value);
  bool praInfosIsSet() const;
  void unsetPraInfos();
  /// <summary>
  ///
  /// </summary>
  std::map<std::string, std::string>& getBdtRefIds();
  void setBdtRefIds(std::map<std::string, std::string> const& value);
  bool bdtRefIdsIsSet() const;
  void unsetBdtRefIds();
  /// <summary>
  ///
  /// </summary>
  bool isLocRoutNotAllowed() const;
  void setLocRoutNotAllowed(bool const value);
  bool locRoutNotAllowedIsSet() const;
  void unsetLocRoutNotAllowed();

  friend void to_json(nlohmann::json& j, const SmPolicyDnnData& o);
  friend void from_json(const nlohmann::json& j, SmPolicyDnnData& o);

 protected:
  std::string m_Dnn;

  std::vector<std::string> m_AllowedServices;
  bool m_AllowedServicesIsSet;
  std::vector<std::string> m_SubscCats;
  bool m_SubscCatsIsSet;
  std::string m_GbrUl;
  bool m_GbrUlIsSet;
  std::string m_GbrDl;
  bool m_GbrDlIsSet;
  bool m_AdcSupport;
  bool m_AdcSupportIsSet;
  bool m_SubscSpendingLimits;
  bool m_SubscSpendingLimitsIsSet;
  int32_t m_Ipv4Index;
  bool m_Ipv4IndexIsSet;
  int32_t m_Ipv6Index;
  bool m_Ipv6IndexIsSet;
  bool m_Offline;
  bool m_OfflineIsSet;
  bool m_Online;
  bool m_OnlineIsSet;
  ChargingInformation m_ChfInfo;
  bool m_ChfInfoIsSet;
  std::map<std::string, LimitIdToMonitoringKey> m_RefUmDataLimitIds;
  bool m_RefUmDataLimitIdsIsSet;
  bool m_MpsPriority;
  bool m_MpsPriorityIsSet;
  bool m_McsPriority;
  bool m_McsPriorityIsSet;
  bool m_ImsSignallingPrio;
  bool m_ImsSignallingPrioIsSet;
  int32_t m_MpsPriorityLevel;
  bool m_MpsPriorityLevelIsSet;
  int32_t m_McsPriorityLevel;
  bool m_McsPriorityLevelIsSet;
  std::map<std::string, PresenceInfo> m_PraInfos;
  bool m_PraInfosIsSet;
  std::map<std::string, std::string> m_BdtRefIds;
  bool m_BdtRefIdsIsSet;
  bool m_LocRoutNotAllowed;
  bool m_LocRoutNotAllowedIsSet;
};

}  // namespace oai::udr::model

#endif /* SmPolicyDnnData_H_ */