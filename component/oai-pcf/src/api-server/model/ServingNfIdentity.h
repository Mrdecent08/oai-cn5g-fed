/**
 * Npcf_SMPolicyControl API
 * Session Management Policy Control Service © 2020, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.1.alpha-5
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ServingNfIdentity.h
 *
 *
 */

#ifndef ServingNfIdentity_H_
#define ServingNfIdentity_H_

#include <string>
#include "AnGwAddress.h"
#include "Guami.h"
#include <nlohmann/json.hpp>

namespace oai {
namespace pcf {
namespace model {

/// <summary>
///
/// </summary>
class ServingNfIdentity {
 public:
  ServingNfIdentity();
  virtual ~ServingNfIdentity() = default;

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

  bool operator==(const ServingNfIdentity& rhs) const;
  bool operator!=(const ServingNfIdentity& rhs) const;

  /////////////////////////////////////////////
  /// ServingNfIdentity members

  /// <summary>
  ///
  /// </summary>
  std::string getServNfInstId() const;
  void setServNfInstId(std::string const& value);
  bool servNfInstIdIsSet() const;
  void unsetServNfInstId();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::Guami getGuami() const;
  void setGuami(oai::model::common::Guami const& value);
  bool guamiIsSet() const;
  void unsetGuami();
  /// <summary>
  ///
  /// </summary>
  AnGwAddress getAnGwAddr() const;
  void setAnGwAddr(AnGwAddress const& value);
  bool anGwAddrIsSet() const;
  void unsetAnGwAddr();

  friend void to_json(nlohmann::json& j, const ServingNfIdentity& o);
  friend void from_json(const nlohmann::json& j, ServingNfIdentity& o);

 protected:
  std::string m_ServNfInstId;
  bool m_ServNfInstIdIsSet;
  oai::model::common::Guami m_Guami;
  bool m_GuamiIsSet;
  AnGwAddress m_AnGwAddr;
  bool m_AnGwAddrIsSet;
};

}  // namespace model
}  // namespace pcf
}  // namespace oai
#endif /* ServingNfIdentity_H_ */