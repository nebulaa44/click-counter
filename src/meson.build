conf_data = configuration_data()
conf_data.set('VERSION', '1.0.0')
configure_file(output : 'config.h',
               configuration : conf_data)

deps = [dependency('gtk4')]
src = ['main.c', 'window.c']

executable('clickcounter', sources: src, dependencies: deps)