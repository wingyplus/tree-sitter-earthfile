[
  "VERSION"
  "FROM"
  "EXPOSE"
] @keyword

(version_statement
  version: (version_number) @number)

(target_ref
  ref: (name) @function)

(target_header
  name: (name) @function)

(port_protocol
  port: (port) @number)

(port_protocol
  port: (port) @number
  protocol: (protocol) @string)
