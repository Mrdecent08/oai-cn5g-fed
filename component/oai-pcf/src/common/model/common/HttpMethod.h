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
 * HttpMethod.h
 *
 *
 */

#ifndef HttpMethod_H_
#define HttpMethod_H_

#include "HttpMethod_anyOf.h"
#include <nlohmann/json.hpp>

namespace oai::model::common {

/// <summary>
///
/// </summary>
class HttpMethod {
 public:
  HttpMethod();
  virtual ~HttpMethod() = default;

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

  bool operator==(const HttpMethod& rhs) const;
  bool operator!=(const HttpMethod& rhs) const;

  /////////////////////////////////////////////
  /// HttpMethod members

  HttpMethod_anyOf getValue() const;
  void setValue(HttpMethod_anyOf value);
  HttpMethod_anyOf::eHttpMethod_anyOf getEnumValue() const;
  void setEnumValue(HttpMethod_anyOf::eHttpMethod_anyOf value);
  friend void to_json(nlohmann::json& j, const HttpMethod& o);
  friend void from_json(const nlohmann::json& j, HttpMethod& o);
  friend void to_json(nlohmann::json& j, const HttpMethod_anyOf& o);
  friend void from_json(const nlohmann::json& j, HttpMethod_anyOf& o);

 protected:
  HttpMethod_anyOf m_value;
};

}  // namespace oai::model::common

#endif /* HttpMethod_H_ */