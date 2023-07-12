/**
 * 3gpp-traffic-influence
 * API for AF traffic influence © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * RouteToLocation.h
 *
 *
 */

#ifndef RouteToLocation_H_
#define RouteToLocation_H_

#include <nlohmann/json.hpp>
#include <string>

#include "RouteInformation.h"

namespace oai::nef::model {

/// <summary>
///
/// </summary>
class RouteToLocation {
 public:
  RouteToLocation();
  virtual ~RouteToLocation() = default;

  /// <summary>
  /// Validate the current data in the model. Throws a ValidationException on
  /// failure.
  /// </summary>
  void validate() const;

  /// <summary>
  /// Validate the current data in the model. Returns false on error and writes
  /// an error message into the given stringstream.
  /// </summary>
  bool validate(std::stringstream& msg) const;

  /// <summary>
  /// Helper overload for validate. Used when one model stores another model and
  /// calls it's validate. Not meant to be called outside that case.
  /// </summary>
  bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

  bool operator==(const RouteToLocation& rhs) const;
  bool operator!=(const RouteToLocation& rhs) const;

  /////////////////////////////////////////////
  /// RouteToLocation members

  /// <summary>
  ///
  /// </summary>
  std::string getDnai() const;
  void setDnai(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  RouteInformation getRouteInfo() const;
  void setRouteInfo(RouteInformation const& value);
  bool routeInfoIsSet() const;
  void unsetRouteInfo();
  /// <summary>
  ///
  /// </summary>
  std::string getRouteProfId() const;
  void setRouteProfId(std::string const& value);
  bool routeProfIdIsSet() const;
  void unsetRouteProfId();

  friend void to_json(nlohmann::json& j, const RouteToLocation& o);
  friend void from_json(const nlohmann::json& j, RouteToLocation& o);

 protected:
  std::string m_Dnai;

  RouteInformation m_RouteInfo;
  bool m_RouteInfoIsSet;
  std::string m_RouteProfId;
  bool m_RouteProfIdIsSet;
};

}  // namespace oai::nef::model

#endif /* RouteToLocation_H_ */