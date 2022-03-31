with import <nixpkgs> {};
runCommand "cricket" {
    buildInputs = [
      gcc
    ];
} ""
