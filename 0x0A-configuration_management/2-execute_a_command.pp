# A manifest designed to terminate the process named "killmenow" from the system's process table.
# During each Puppet execution
exec { 'killing a process using pkill':
  command  => 'pkill -9 killmenow',
  path     => '/usr/bin:/bin',
  onlyif   => 'pgrep killmenow',
  provider => shell,

}
