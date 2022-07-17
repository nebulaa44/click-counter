conf_data = configuration_data()
conf_data.set('version', '1.0.0')
configure_file(output : 'config.h',
               configuration : conf_data)

deps = [dependency('gtk4')]
src = ['main.c']

executable('clickcounter', sources: 'main.c', dependencies: deps)