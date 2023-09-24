[
  "VERSION"
  "FROM"
  "EXPOSE"
] @keyword

(version
  version_number: (version_number) @number)

(local_ref
  target: (name) @function)

(target_header
  name: (name) @function)

;; EXPOSE

(port_protocol (port) @number)
(port_protocol (port) @number (protocol))
