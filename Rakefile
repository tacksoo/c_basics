require 'rake/clean'

desc "Default Task"
task :default => :mem


desc "Input.c task"
task :input=> "input.c" do
  sh "gcc -o input.exe input.c"
end

desc "Compile memory allocation example"
task :mem => ["mem.c"] do
  sh "gcc -o mem.exe mem.c"
end

CLEAN.include "**/*\.o", "**/*\.out", "**/*\.exe"
