[
  "VERSION"
  "FROM"
] @keyword

(version_statement
  version: (version_number) @number)

(target_ref
  ref: (name) @function)

(target_header
  name: (name) @function)

;; EXPOSE

; (port_protocol (port) @number)
; (port_protocol (port) @number (protocol))
