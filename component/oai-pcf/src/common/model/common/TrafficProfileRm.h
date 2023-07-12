/**
 * Common Data Types
 * Common Data Types for Service Based Interfaces. © 2020, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * TrafficProfileRm.h
 *
 *
 */

#ifndef TrafficProfileRm_H_
#define TrafficProfileRm_H_

#include "TrafficProfile.h"
#include "NullValue.h"
#include <nlohmann/json.hpp>

namespace oai::model::common {

/// <summary>
///
/// </summary>
class TrafficProfileRm {
 public:
  TrafficProfileRm();
  virtual ~TrafficProfileRm() = default;

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

  bool operator==(const TrafficProfileRm& rhs) const;
  bool operator!=(const TrafficProfileRm& rhs) const;

  /////////////////////////////////////////////
  /// TrafficProfileRm members

  friend void to_json(nlohmann::json& j, const TrafficProfileRm& o);
  friend void from_json(const nlohmann::json& j, TrafficProfileRm& o);

 protected:
};

}  // namespace oai::model::common

#endif /* TrafficProfileRm_H_ */